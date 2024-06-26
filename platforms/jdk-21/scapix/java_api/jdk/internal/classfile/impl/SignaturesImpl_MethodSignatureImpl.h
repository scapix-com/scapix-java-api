// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Record.h>
#include <scapix/java_api/jdk/internal/classfile/MethodSignature.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_SIGNATURESIMPL_METHODSIGNATUREIMPL_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_SIGNATURESIMPL_METHODSIGNATUREIMPL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::classfile::impl { class SignaturesImpl_MethodSignatureImpl; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::classfile::impl::SignaturesImpl_MethodSignatureImpl>
{
	static constexpr fixed_string class_name = "jdk/internal/classfile/impl/SignaturesImpl$MethodSignatureImpl";
	using base_classes = std::tuple<scapix::java_api::java::lang::Record, scapix::java_api::jdk::internal::classfile::MethodSignature>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_SIGNATURESIMPL_METHODSIGNATUREIMPL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_SIGNATURESIMPL_METHODSIGNATUREIMPL)
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_SIGNATURESIMPL_METHODSIGNATUREIMPL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/List.h>
#include <scapix/java_api/jdk/internal/classfile/Signature.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::classfile::impl::SignaturesImpl_MethodSignatureImpl : public jni::object_base<"jdk/internal/classfile/impl/SignaturesImpl$MethodSignatureImpl",
	java::lang::Record,
	jdk::internal::classfile::MethodSignature>
{
public:

	static jni::ref<jdk::internal::classfile::impl::SignaturesImpl_MethodSignatureImpl> new_object(jni::ref<java::util::List> typeParameters, jni::ref<java::util::List> throwableSignatures, jni::ref<jdk::internal::classfile::Signature> result, jni::ref<java::util::List> arguments) { return base_::new_object(typeParameters, throwableSignatures, result, arguments); }
	jni::ref<java::lang::String> signatureString() { return call_method<"signatureString", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jboolean equals(jni::ref<java::lang::Object> o) { return call_method<"equals", jboolean>(o); }
	jni::ref<java::util::List> typeParameters() { return call_method<"typeParameters", jni::ref<java::util::List>>(); }
	jni::ref<java::util::List> throwableSignatures() { return call_method<"throwableSignatures", jni::ref<java::util::List>>(); }
	jni::ref<jdk::internal::classfile::Signature> result() { return call_method<"result", jni::ref<jdk::internal::classfile::Signature>>(); }
	jni::ref<java::util::List> arguments() { return call_method<"arguments", jni::ref<java::util::List>>(); }

protected:

	SignaturesImpl_MethodSignatureImpl(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_SIGNATURESIMPL_METHODSIGNATUREIMPL
