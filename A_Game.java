/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ
Author: Depressed_C0der
Created: 2026-05-23 10:42:32
*/
import java.io.BufferedInputStream

private class FastScanner {
    private val input = BufferedInputStream(System.`in`)
    private val buffer = ByteArray(1 shl 16)
    private var len = 0
    private var ptr = 0

    private fun readByte(): Int {
        if (ptr >= len) {
            len = input.read(buffer)
            ptr = 0
            if (len <= 0) return -1
        }
        return buffer[ptr++].toInt()
    }

    fun nextLong(): Long {
        var c: Int
        do {
            c = readByte()
        } while (c <= 32 && c != -1)

        var sign = 1
        var res = 0L
        var ch = c
        if (ch == '-'.code) {
            sign = -1
            ch = readByte()
        }

        while (ch > 32 && ch != -1) {
            res = res * 10 + (ch - '0'.code)
            ch = readByte()
        }
        return res * sign
    }

    fun nextInt(): Int = nextLong().toInt()
}

private fun depressedC0der(fs: FastScanner, out: StringBuilder) {
    val n = fs.nextLong()
    val a1 = fs.nextLong()
    val b1 = fs.nextLong()
    val a2 = fs.nextLong()
    val b2 = fs.nextLong()

    val al = a1 + a2 + 0
    val bb = b1 + b2 + n

    if (al > bb) {
        out.append("NO\n")
    } else if (al < bb) {
        out.append("YES\n")
    } else {
        if (a1 > b1 && a2 > b2) out.append("NO\n")
        else out.append("YES\n")
    }
}

fun main() {
    val fs = FastScanner()
    val tc = fs.nextInt()
    val out = StringBuilder()

    for (i in 1..tc) {
        depressedC0der(fs, out)
    }

    print(out.toString())
}