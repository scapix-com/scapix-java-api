// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/foreign/ValueLayout.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_FOREIGN_VALUELAYOUT_OFBYTE_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_FOREIGN_VALUELAYOUT_OFBYTE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang::foreign { class ValueLayout_OfByte; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::foreign::ValueLayout_OfByte>
{
	static constexpr fixed_string class_name = "java/lang/foreign/ValueLayout$OfByte";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::foreign::ValueLayout>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_FOREIGN_VALUELAYOUT_OFBYTE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_FOREIGN_VALUELAYOUT_OFBYTE)
#define SCAPIX_JAVA_API_JAVA_LANG_FOREIGN_VALUELAYOUT_OFBYTE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/nio/ByteOrder.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::lang::foreign::ValueLayout_OfByte : public jni::object_base<"java/lang/foreign/ValueLayout$OfByte",
	java::lang::Object,
	java::lang::foreign::ValueLayout>
{
public:

	jni::ref<java::lang::foreign::ValueLayout_OfByte> withName(jni::ref<java::lang::String> p1) { return call_method<"withName", jni::ref<java::lang::foreign::ValueLayout_OfByte>>(p1); }
	jni::ref<java::lang::foreign::ValueLayout_OfByte> withoutName() { return call_method<"withoutName", jni::ref<java::lang::foreign::ValueLayout_OfByte>>(); }
	jni::ref<java::lang::foreign::ValueLayout_OfByte> withByteAlignment(jlong p1) { return call_method<"withByteAlignment", jni::ref<java::lang::foreign::ValueLayout_OfByte>>(p1); }
	jni::ref<java::lang::foreign::ValueLayout_OfByte> withOrder(jni::ref<java::nio::ByteOrder> p1) { return call_method<"withOrder", jni::ref<java::lang::foreign::ValueLayout_OfByte>>(p1); }

protected:

	ValueLayout_OfByte(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_FOREIGN_VALUELAYOUT_OFBYTE
