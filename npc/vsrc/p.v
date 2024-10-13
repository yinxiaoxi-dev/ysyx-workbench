module p(
  input a,
  input b,
  output f,
	output g,
	output k
);

	initial begin $display("hello world"); end
  assign f = a ^ b;
	assign k = a | b;
	assign g = '1 ;

endmodule


//module dual_control_switch(
//    input wire a,
//    input wire b,
//    output wire f
//);
//
//    // 实现异或逻辑
//    assign f = a ^ b;
//
//endmodule
//
//// 测试模块
//module testbench;
//    reg a, b;
//    wire f;
//
//    // 实例化被测试的模块
//    dual_control_switch dut(
//        .a(a),
//        .b(b),
//        .f(f)
//    );
//
//    initial begin
//        $display("开始测试双控开关...");
//
//        // 测试所有可能的输入组合
//        for (int i = 0; i < 4; i = i + 1) begin
//            a = i[0];
//            b = i[1];
//            #10; // 等待一段时间让输出稳定
//
//            $display("a = %b, b = %b, f = %b", a, b, f);
//
//            // 验证输出是否正确
//            if (f !== (a ^ b)) begin
//                $display("错误：a = %b, b = %b, 期望 f = %b, 但得到 f = %b", a, b, a ^ b, f);
//                $finish;
//            end
//        end
//
//        $display("测试完成，所有用例通过！");
//        $finish;
//    end
//
//endmodule
