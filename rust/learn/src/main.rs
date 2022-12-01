use std::io;

fn main() -> io::Result<()> {
    let mut user_input = String::new();
    let stdin = io::stdin();

    stdin.read_line(&mut user_input).unwrap();

    let length = user_input.len();

    println!("Input string: {}, length: {}", user_input, length);

    Ok(())
}
