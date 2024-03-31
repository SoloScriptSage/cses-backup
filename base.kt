
import java.io.BufferedReader
import java.io.InputStreamReader

fun main() {
    val br = BufferedReader(InputStreamReader(System.`in`))
    val t = br.readLine().toInt()

    repeat(t) {
        solve(br.readLine())
    }
}

fun solve(s: String) {
    var todel = -1
    for (i in s.length - 1 downTo 0) {
        if (s[i].isDigit() && s[i] != '0') {
            todel = i
            break
        }
    }

    val result = StringBuilder(s)
    if (todel != -1) {
        result.deleteCharAt(todel)
    }

    var i = result.length - 1
    while (i >= 0 && result[i] == '0') {
        result.deleteCharAt(i)
        i--
    }

    println(result)
}
