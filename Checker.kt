import java.util.*
import java.io.*

class Checker {
    fun test(inf: Scanner, ouf: Scanner, ans: Scanner) {
    }
}

fun main(args: Array<String>) {
    val input = Scanner(File(args[0]))
    val output = Scanner(File(args[1]))
    val user = Scanner(File(args[2]))
    val checker = Checker()
    checker.test(input, user, output)
}
