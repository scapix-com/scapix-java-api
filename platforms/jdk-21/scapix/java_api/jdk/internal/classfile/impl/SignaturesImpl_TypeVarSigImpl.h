// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Record.h>
#include <scapix/java_api/jdk/internal/classfile/Signature_TypeVarSig.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_SIGNATURESIMPL_TYPEVARSIGIMPL_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_SIGNATURESIMPL_TYPEVARSIGIMPL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::classfile::impl { class SignaturesImpl_TypeVarSigImpl; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::classfile::impl::SignaturesImpl_TypeVarSigImpl>
{
	static constexpr fixed_string class_name = "jdk/internal/classfile/impl/SignaturesImpl$TypeVarSigImpl";
	using base_classes = std::tuple<scapix::java_api::java::lang::Record, scapix::java_api::jdk::internal::classfile::Signature_TypeVarSig>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_SIGNATURESIMPL_TYPEVARSIGIMPL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_SIGNATURESIMPL_TYPEVARSIGIMPL)
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_SIGNATURESIMPL_TYPEVARSIGIMPL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::classfile::impl::SignaturesImpl_TypeVarSigImpl : public jni::object_base<"jdk/internal/classfile/impl/SignaturesImpl$TypeVarSigImpl",
	java::lang::Record,
	jdk::internal::classfile::Signature_TypeVarSig>
{
public:

	static jni::ref<jdk::internal::classfile::impl::SignaturesImpl_TypeVarSigImpl> new_object(jni::ref<java::lang::String> identifier) { return base_::new_object(identifier); }
	jni::ref<java::lang::String> signatureString() { return call_method<"signatureString", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jboolean equals(jni::ref<java::lang::Object> o) { return call_method<"equals", jboolean>(o); }
	jni::ref<java::lang::String> identifier() { return call_method<"identifier", jni::ref<java::lang::String>>(); }

protected:

	SignaturesImpl_TypeVarSigImpl(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_SIGNATURESIMPL_TYPEVARSIGIMPL
