// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/classfile/Signature.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_SIGNATURE_BASETYPESIG_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_SIGNATURE_BASETYPESIG_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang::classfile { class Signature_BaseTypeSig; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::classfile::Signature_BaseTypeSig>
{
	static constexpr fixed_string class_name = "java/lang/classfile/Signature$BaseTypeSig";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::classfile::Signature>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_SIGNATURE_BASETYPESIG_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_SIGNATURE_BASETYPESIG)
#define SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_SIGNATURE_BASETYPESIG

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/constant/ClassDesc.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::lang::classfile::Signature_BaseTypeSig : public jni::object_base<"java/lang/classfile/Signature$BaseTypeSig",
	java::lang::Object,
	java::lang::classfile::Signature>
{
public:

	jchar baseType() { return call_method<"baseType", jchar>(); }
	static jni::ref<java::lang::classfile::Signature_BaseTypeSig> of(jni::ref<java::lang::constant::ClassDesc> classDesc) { return call_static_method<"of", jni::ref<java::lang::classfile::Signature_BaseTypeSig>>(classDesc); }
	static jni::ref<java::lang::classfile::Signature_BaseTypeSig> of(jchar baseType) { return call_static_method<"of", jni::ref<java::lang::classfile::Signature_BaseTypeSig>>(baseType); }

protected:

	Signature_BaseTypeSig(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_SIGNATURE_BASETYPESIG
