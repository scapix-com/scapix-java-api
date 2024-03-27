// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/foreign/MemoryLayout.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_FOREIGN_VALUELAYOUT_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_FOREIGN_VALUELAYOUT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang::foreign { class ValueLayout; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::foreign::ValueLayout>
{
	static constexpr fixed_string class_name = "java/lang/foreign/ValueLayout";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::foreign::MemoryLayout>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_FOREIGN_VALUELAYOUT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_FOREIGN_VALUELAYOUT)
#define SCAPIX_JAVA_API_JAVA_LANG_FOREIGN_VALUELAYOUT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Class.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/foreign/AddressLayout.h>
#include <scapix/java_api/java/lang/foreign/ValueLayout_OfBoolean.h>
#include <scapix/java_api/java/lang/foreign/ValueLayout_OfByte.h>
#include <scapix/java_api/java/lang/foreign/ValueLayout_OfChar.h>
#include <scapix/java_api/java/lang/foreign/ValueLayout_OfDouble.h>
#include <scapix/java_api/java/lang/foreign/ValueLayout_OfFloat.h>
#include <scapix/java_api/java/lang/foreign/ValueLayout_OfInt.h>
#include <scapix/java_api/java/lang/foreign/ValueLayout_OfLong.h>
#include <scapix/java_api/java/lang/foreign/ValueLayout_OfShort.h>
#include <scapix/java_api/java/lang/invoke/VarHandle.h>
#include <scapix/java_api/java/nio/ByteOrder.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::lang::foreign::ValueLayout : public jni::object_base<"java/lang/foreign/ValueLayout",
	java::lang::Object,
	java::lang::foreign::MemoryLayout>
{
public:

	using OfByte = ValueLayout_OfByte;
	using OfBoolean = ValueLayout_OfBoolean;
	using OfChar = ValueLayout_OfChar;
	using OfShort = ValueLayout_OfShort;
	using OfInt = ValueLayout_OfInt;
	using OfLong = ValueLayout_OfLong;
	using OfFloat = ValueLayout_OfFloat;
	using OfDouble = ValueLayout_OfDouble;

	static jni::ref<java::lang::foreign::AddressLayout> ADDRESS() { return get_static_field<"ADDRESS", jni::ref<java::lang::foreign::AddressLayout>>(); }
	static jni::ref<java::lang::foreign::ValueLayout_OfByte> JAVA_BYTE() { return get_static_field<"JAVA_BYTE", jni::ref<java::lang::foreign::ValueLayout_OfByte>>(); }
	static jni::ref<java::lang::foreign::ValueLayout_OfBoolean> JAVA_BOOLEAN() { return get_static_field<"JAVA_BOOLEAN", jni::ref<java::lang::foreign::ValueLayout_OfBoolean>>(); }
	static jni::ref<java::lang::foreign::ValueLayout_OfChar> JAVA_CHAR() { return get_static_field<"JAVA_CHAR", jni::ref<java::lang::foreign::ValueLayout_OfChar>>(); }
	static jni::ref<java::lang::foreign::ValueLayout_OfShort> JAVA_SHORT() { return get_static_field<"JAVA_SHORT", jni::ref<java::lang::foreign::ValueLayout_OfShort>>(); }
	static jni::ref<java::lang::foreign::ValueLayout_OfInt> JAVA_INT() { return get_static_field<"JAVA_INT", jni::ref<java::lang::foreign::ValueLayout_OfInt>>(); }
	static jni::ref<java::lang::foreign::ValueLayout_OfLong> JAVA_LONG() { return get_static_field<"JAVA_LONG", jni::ref<java::lang::foreign::ValueLayout_OfLong>>(); }
	static jni::ref<java::lang::foreign::ValueLayout_OfFloat> JAVA_FLOAT() { return get_static_field<"JAVA_FLOAT", jni::ref<java::lang::foreign::ValueLayout_OfFloat>>(); }
	static jni::ref<java::lang::foreign::ValueLayout_OfDouble> JAVA_DOUBLE() { return get_static_field<"JAVA_DOUBLE", jni::ref<java::lang::foreign::ValueLayout_OfDouble>>(); }
	static jni::ref<java::lang::foreign::AddressLayout> ADDRESS_UNALIGNED() { return get_static_field<"ADDRESS_UNALIGNED", jni::ref<java::lang::foreign::AddressLayout>>(); }
	static jni::ref<java::lang::foreign::ValueLayout_OfChar> JAVA_CHAR_UNALIGNED() { return get_static_field<"JAVA_CHAR_UNALIGNED", jni::ref<java::lang::foreign::ValueLayout_OfChar>>(); }
	static jni::ref<java::lang::foreign::ValueLayout_OfShort> JAVA_SHORT_UNALIGNED() { return get_static_field<"JAVA_SHORT_UNALIGNED", jni::ref<java::lang::foreign::ValueLayout_OfShort>>(); }
	static jni::ref<java::lang::foreign::ValueLayout_OfInt> JAVA_INT_UNALIGNED() { return get_static_field<"JAVA_INT_UNALIGNED", jni::ref<java::lang::foreign::ValueLayout_OfInt>>(); }
	static jni::ref<java::lang::foreign::ValueLayout_OfLong> JAVA_LONG_UNALIGNED() { return get_static_field<"JAVA_LONG_UNALIGNED", jni::ref<java::lang::foreign::ValueLayout_OfLong>>(); }
	static jni::ref<java::lang::foreign::ValueLayout_OfFloat> JAVA_FLOAT_UNALIGNED() { return get_static_field<"JAVA_FLOAT_UNALIGNED", jni::ref<java::lang::foreign::ValueLayout_OfFloat>>(); }
	static jni::ref<java::lang::foreign::ValueLayout_OfDouble> JAVA_DOUBLE_UNALIGNED() { return get_static_field<"JAVA_DOUBLE_UNALIGNED", jni::ref<java::lang::foreign::ValueLayout_OfDouble>>(); }

	jni::ref<java::nio::ByteOrder> order() { return call_method<"order", jni::ref<java::nio::ByteOrder>>(); }
	jni::ref<java::lang::foreign::ValueLayout> withOrder(jni::ref<java::nio::ByteOrder> p1) { return call_method<"withOrder", jni::ref<java::lang::foreign::ValueLayout>>(p1); }
	jni::ref<java::lang::foreign::ValueLayout> withoutName() { return call_method<"withoutName", jni::ref<java::lang::foreign::ValueLayout>>(); }
	jni::ref<java::lang::invoke::VarHandle> arrayElementVarHandle(jni::ref<jni::array<jint>> p1) { return call_method<"arrayElementVarHandle", jni::ref<java::lang::invoke::VarHandle>>(p1); }
	jni::ref<java::lang::Class> carrier() { return call_method<"carrier", jni::ref<java::lang::Class>>(); }
	jni::ref<java::lang::foreign::ValueLayout> withName(jni::ref<java::lang::String> p1) { return call_method<"withName", jni::ref<java::lang::foreign::ValueLayout>>(p1); }
	jni::ref<java::lang::foreign::ValueLayout> withByteAlignment(jlong p1) { return call_method<"withByteAlignment", jni::ref<java::lang::foreign::ValueLayout>>(p1); }

protected:

	ValueLayout(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_FOREIGN_VALUELAYOUT
