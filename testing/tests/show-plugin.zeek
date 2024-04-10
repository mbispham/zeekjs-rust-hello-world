# @TEST-EXEC: zeek -NN Zeek::zeekjs-rust-hello-world |sed -e 's/version.*)/version)/g' >output
# @TEST-EXEC: btest-diff output
