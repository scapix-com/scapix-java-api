// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/reflect/ProxyGenerator_ConstantPool_Entry.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_REFLECT_PROXYGENERATOR_CONSTANTPOOL_INDIRECTENTRY_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_REFLECT_PROXYGENERATOR_CONSTANTPOOL_INDIRECTENTRY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang::reflect { class ProxyGenerator_ConstantPool_IndirectEntry; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::reflect::ProxyGenerator_ConstantPool_IndirectEntry>
{
	static constexpr fixed_string class_name = "java/lang/reflect/ProxyGenerator$ConstantPool$IndirectEntry";
	using base_classes = std::tuple<scapix::java_api::java::lang::reflect::ProxyGenerator_ConstantPool_Entry>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_REFLECT_PROXYGENERATOR_CONSTANTPOOL_INDIRECTENTRY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_REFLECT_PROXYGENERATOR_CONSTANTPOOL_INDIRECTENTRY)
#define SCAPIX_JAVA_API_JAVA_LANG_REFLECT_PROXYGENERATOR_CONSTANTPOOL_INDIRECTENTRY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/DataOutputStream.h>
#include <scapix/java_api/java/lang/Object.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::lang::reflect::ProxyGenerator_ConstantPool_IndirectEntry : public jni::object_base<"java/lang/reflect/ProxyGenerator$ConstantPool$IndirectEntry",
	java::lang::reflect::ProxyGenerator_ConstantPool_Entry>
{
public:

	static jni::ref<java::lang::reflect::ProxyGenerator_ConstantPool_IndirectEntry> new_object(jint tag, jshort index) { return base_::new_object(tag, index); }
	static jni::ref<java::lang::reflect::ProxyGenerator_ConstantPool_IndirectEntry> new_object(jint tag, jshort index0, jshort index1) { return base_::new_object(tag, index0, index1); }
	void write(jni::ref<java::io::DataOutputStream> out) { return call_method<"write", void>(out); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jboolean equals(jni::ref<java::lang::Object> obj) { return call_method<"equals", jboolean>(obj); }

protected:

	ProxyGenerator_ConstantPool_IndirectEntry(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_REFLECT_PROXYGENERATOR_CONSTANTPOOL_INDIRECTENTRY
