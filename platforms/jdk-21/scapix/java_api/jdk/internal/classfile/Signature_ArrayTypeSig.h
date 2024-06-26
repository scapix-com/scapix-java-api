// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/jdk/internal/classfile/Signature_RefTypeSig.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_SIGNATURE_ARRAYTYPESIG_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_SIGNATURE_ARRAYTYPESIG_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::classfile { class Signature_ArrayTypeSig; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::classfile::Signature_ArrayTypeSig>
{
	static constexpr fixed_string class_name = "jdk/internal/classfile/Signature$ArrayTypeSig";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::jdk::internal::classfile::Signature_RefTypeSig>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_SIGNATURE_ARRAYTYPESIG_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_SIGNATURE_ARRAYTYPESIG)
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_SIGNATURE_ARRAYTYPESIG

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/jdk/internal/classfile/Signature.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::classfile::Signature_ArrayTypeSig : public jni::object_base<"jdk/internal/classfile/Signature$ArrayTypeSig",
	java::lang::Object,
	jdk::internal::classfile::Signature_RefTypeSig>
{
public:

	jni::ref<jdk::internal::classfile::Signature> componentSignature() { return call_method<"componentSignature", jni::ref<jdk::internal::classfile::Signature>>(); }
	static jni::ref<jdk::internal::classfile::Signature_ArrayTypeSig> of(jni::ref<jdk::internal::classfile::Signature> componentSignature) { return call_static_method<"of", jni::ref<jdk::internal::classfile::Signature_ArrayTypeSig>>(componentSignature); }
	static jni::ref<jdk::internal::classfile::Signature_ArrayTypeSig> of(jint dims, jni::ref<jdk::internal::classfile::Signature> componentSignature) { return call_static_method<"of", jni::ref<jdk::internal::classfile::Signature_ArrayTypeSig>>(dims, componentSignature); }

protected:

	Signature_ArrayTypeSig(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_SIGNATURE_ARRAYTYPESIG
