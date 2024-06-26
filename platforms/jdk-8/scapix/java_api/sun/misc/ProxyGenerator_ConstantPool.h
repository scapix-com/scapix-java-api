// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_MISC_PROXYGENERATOR_CONSTANTPOOL_FWD
#define SCAPIX_JAVA_API_SUN_MISC_PROXYGENERATOR_CONSTANTPOOL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::misc { class ProxyGenerator_ConstantPool; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::misc::ProxyGenerator_ConstantPool>
{
	static constexpr fixed_string class_name = "sun/misc/ProxyGenerator$ConstantPool";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_MISC_PROXYGENERATOR_CONSTANTPOOL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_MISC_PROXYGENERATOR_CONSTANTPOOL)
#define SCAPIX_JAVA_API_SUN_MISC_PROXYGENERATOR_CONSTANTPOOL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/OutputStream.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::misc::ProxyGenerator_ConstantPool : public jni::object_base<"sun/misc/ProxyGenerator$ConstantPool",
	java::lang::Object>
{
public:

	jshort getUtf8(jni::ref<java::lang::String> p1) { return call_method<"getUtf8", jshort>(p1); }
	jshort getInteger(jint p1) { return call_method<"getInteger", jshort>(p1); }
	jshort getFloat(jfloat p1) { return call_method<"getFloat", jshort>(p1); }
	jshort getClass(jni::ref<java::lang::String> p1) { return call_method<"getClass", jshort>(p1); }
	jshort getString(jni::ref<java::lang::String> p1) { return call_method<"getString", jshort>(p1); }
	jshort getFieldRef(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2, jni::ref<java::lang::String> p3) { return call_method<"getFieldRef", jshort>(p1, p2, p3); }
	jshort getMethodRef(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2, jni::ref<java::lang::String> p3) { return call_method<"getMethodRef", jshort>(p1, p2, p3); }
	jshort getInterfaceMethodRef(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2, jni::ref<java::lang::String> p3) { return call_method<"getInterfaceMethodRef", jshort>(p1, p2, p3); }
	jshort getNameAndType(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2) { return call_method<"getNameAndType", jshort>(p1, p2); }
	void setReadOnly() { return call_method<"setReadOnly", void>(); }
	void write(jni::ref<java::io::OutputStream> p1) { return call_method<"write", void>(p1); }

protected:

	ProxyGenerator_ConstantPool(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_MISC_PROXYGENERATOR_CONSTANTPOOL
