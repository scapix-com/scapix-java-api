// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Record.h>
#include <scapix/java_api/jdk/internal/classfile/Signature_TypeArg.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_SIGNATURESIMPL_TYPEARGIMPL_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_SIGNATURESIMPL_TYPEARGIMPL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::classfile::impl { class SignaturesImpl_TypeArgImpl; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::classfile::impl::SignaturesImpl_TypeArgImpl>
{
	static constexpr fixed_string class_name = "jdk/internal/classfile/impl/SignaturesImpl$TypeArgImpl";
	using base_classes = std::tuple<scapix::java_api::java::lang::Record, scapix::java_api::jdk::internal::classfile::Signature_TypeArg>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_SIGNATURESIMPL_TYPEARGIMPL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_SIGNATURESIMPL_TYPEARGIMPL)
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_SIGNATURESIMPL_TYPEARGIMPL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Optional.h>
#include <scapix/java_api/jdk/internal/classfile/Signature_TypeArg_WildcardIndicator.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::classfile::impl::SignaturesImpl_TypeArgImpl : public jni::object_base<"jdk/internal/classfile/impl/SignaturesImpl$TypeArgImpl",
	java::lang::Record,
	jdk::internal::classfile::Signature_TypeArg>
{
public:

	static jni::ref<jdk::internal::classfile::impl::SignaturesImpl_TypeArgImpl> new_object(jni::ref<jdk::internal::classfile::Signature_TypeArg_WildcardIndicator> wildcardIndicator, jni::ref<java::util::Optional> boundType) { return base_::new_object(wildcardIndicator, boundType); }
	jni::ref<java::lang::String> signatureString() { return call_method<"signatureString", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jboolean equals(jni::ref<java::lang::Object> o) { return call_method<"equals", jboolean>(o); }
	jni::ref<jdk::internal::classfile::Signature_TypeArg_WildcardIndicator> wildcardIndicator() { return call_method<"wildcardIndicator", jni::ref<jdk::internal::classfile::Signature_TypeArg_WildcardIndicator>>(); }
	jni::ref<java::util::Optional> boundType() { return call_method<"boundType", jni::ref<java::util::Optional>>(); }

protected:

	SignaturesImpl_TypeArgImpl(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_SIGNATURESIMPL_TYPEARGIMPL
