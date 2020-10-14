extern { fn putchar(x: usize); }

fn main() {
    let y = !bool::default() as usize;
    let mut z = y + y + y;
    z = (z << y + z) + y;
    for v in z..z + y + y + y + y {
        unsafe { putchar(v); }
    }
}
