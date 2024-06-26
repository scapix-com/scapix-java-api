// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Record.h>
#include <scapix/java_api/jdk/internal/classfile/ClassSignature.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_SIGNATURESIMPL_CLASSSIGNATUREIMPL_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_SIGNATURESIMPL_CLASSSIGNATUREIMPL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::classfile::impl { class SignaturesImpl_ClassSignatureImpl; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::classfile::impl::SignaturesImpl_ClassSignatureImpl>
{
	static constexpr fixed_string class_name = "jdk/internal/classfile/impl/SignaturesImpl$ClassSignatureImpl";
	using base_classes = std::tuple<scapix::java_api::java::lang::Record, scapix::java_api::jdk::internal::classfile::ClassSignature>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_SIGNATURESIMPL_CLASSSIGNATUREIMPL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_SIGNATURESIMPL_CLASSSIGNATUREIMPL)
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_SIGNATURESIMPL_CLASSSIGNATUREIMPL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/List.h>
#include <scapix/java_api/jdk/internal/classfile/Signature_RefTypeSig.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::classfile::impl::SignaturesImpl_ClassSignatureImpl : public jni::object_base<"jdk/internal/classfile/impl/SignaturesImpl$ClassSignatureImpl",
	java::lang::Record,
	jdk::internal::classfile::ClassSignature>
{
public:

	static jni::ref<jdk::internal::classfile::impl::SignaturesImpl_ClassSignatureImpl> new_object(jni::ref<java::util::List> typeParameters, jni::ref<jdk::internal::classfile::Signature_RefTypeSig> superclassSignature, jni::ref<java::util::List> superinterfaceSignatures) { return base_::new_object(typeParameters, superclassSignature, superinterfaceSignatures); }
	jni::ref<java::lang::String> signatureString() { return call_method<"signatureString", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jboolean equals(jni::ref<java::lang::Object> o) { return call_method<"equals", jboolean>(o); }
	jni::ref<java::util::List> typeParameters() { return call_method<"typeParameters", jni::ref<java::util::List>>(); }
	jni::ref<jdk::internal::classfile::Signature_RefTypeSig> superclassSignature() { return call_method<"superclassSignature", jni::ref<jdk::internal::classfile::Signature_RefTypeSig>>(); }
	jni::ref<java::util::List> superinterfaceSignatures() { return call_method<"superinterfaceSignatures", jni::ref<java::util::List>>(); }

protected:

	SignaturesImpl_ClassSignatureImpl(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_SIGNATURESIMPL_CLASSSIGNATUREIMPL
