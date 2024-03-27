// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_REFLECT_PROXYGENERATOR_CONSTANTPOOL_ENTRY_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_REFLECT_PROXYGENERATOR_CONSTANTPOOL_ENTRY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang::reflect { class ProxyGenerator_ConstantPool_Entry; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::reflect::ProxyGenerator_ConstantPool_Entry>
{
	static constexpr fixed_string class_name = "java/lang/reflect/ProxyGenerator$ConstantPool$Entry";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_REFLECT_PROXYGENERATOR_CONSTANTPOOL_ENTRY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_REFLECT_PROXYGENERATOR_CONSTANTPOOL_ENTRY)
#define SCAPIX_JAVA_API_JAVA_LANG_REFLECT_PROXYGENERATOR_CONSTANTPOOL_ENTRY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/DataOutputStream.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::lang::reflect::ProxyGenerator_ConstantPool_Entry : public jni::object_base<"java/lang/reflect/ProxyGenerator$ConstantPool$Entry",
	java::lang::Object>
{
public:

	void write(jni::ref<java::io::DataOutputStream> p1) { return call_method<"write", void>(p1); }

protected:

	ProxyGenerator_ConstantPool_Entry(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_REFLECT_PROXYGENERATOR_CONSTANTPOOL_ENTRY