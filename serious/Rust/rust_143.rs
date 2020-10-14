extern { fn putchar(x: usize); }

fn main() {
    let y = !bool::default() as usize;
    let x = y - y;
    let mut z = y << y | y;
    let t = z + y;
    z = (z << t) + y;
    unsafe {
        for v in x..t {
            putchar(z + v);
        }
    }
}
