// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/reflect/ProxyGenerator_ConstantPool_Entry.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_REFLECT_PROXYGENERATOR_CONSTANTPOOL_VALUEENTRY_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_REFLECT_PROXYGENERATOR_CONSTANTPOOL_VALUEENTRY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang::reflect { class ProxyGenerator_ConstantPool_ValueEntry; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::reflect::ProxyGenerator_ConstantPool_ValueEntry>
{
	static constexpr fixed_string class_name = "java/lang/reflect/ProxyGenerator$ConstantPool$ValueEntry";
	using base_classes = std::tuple<scapix::java_api::java::lang::reflect::ProxyGenerator_ConstantPool_Entry>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_REFLECT_PROXYGENERATOR_CONSTANTPOOL_VALUEENTRY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_REFLECT_PROXYGENERATOR_CONSTANTPOOL_VALUEENTRY)
#define SCAPIX_JAVA_API_JAVA_LANG_REFLECT_PROXYGENERATOR_CONSTANTPOOL_VALUEENTRY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/DataOutputStream.h>
#include <scapix/java_api/java/lang/Object.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::lang::reflect::ProxyGenerator_ConstantPool_ValueEntry : public jni::object_base<"java/lang/reflect/ProxyGenerator$ConstantPool$ValueEntry",
	java::lang::reflect::ProxyGenerator_ConstantPool_Entry>
{
public:

	static jni::ref<java::lang::reflect::ProxyGenerator_ConstantPool_ValueEntry> new_object(jni::ref<java::lang::Object> value) { return base_::new_object(value); }
	void write(jni::ref<java::io::DataOutputStream> out) { return call_method<"write", void>(out); }

protected:

	ProxyGenerator_ConstantPool_ValueEntry(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_REFLECT_PROXYGENERATOR_CONSTANTPOOL_VALUEENTRY
