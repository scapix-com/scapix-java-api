// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Record.h>
#include <scapix/java_api/jdk/internal/classfile/Signature_TypeParam.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_SIGNATURESIMPL_TYPEPARAMIMPL_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_SIGNATURESIMPL_TYPEPARAMIMPL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::classfile::impl { class SignaturesImpl_TypeParamImpl; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::classfile::impl::SignaturesImpl_TypeParamImpl>
{
	static constexpr fixed_string class_name = "jdk/internal/classfile/impl/SignaturesImpl$TypeParamImpl";
	using base_classes = std::tuple<scapix::java_api::java::lang::Record, scapix::java_api::jdk::internal::classfile::Signature_TypeParam>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_SIGNATURESIMPL_TYPEPARAMIMPL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_SIGNATURESIMPL_TYPEPARAMIMPL)
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_SIGNATURESIMPL_TYPEPARAMIMPL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/List.h>
#include <scapix/java_api/java/util/Optional.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::classfile::impl::SignaturesImpl_TypeParamImpl : public jni::object_base<"jdk/internal/classfile/impl/SignaturesImpl$TypeParamImpl",
	java::lang::Record,
	jdk::internal::classfile::Signature_TypeParam>
{
public:

	static jni::ref<jdk::internal::classfile::impl::SignaturesImpl_TypeParamImpl> new_object(jni::ref<java::lang::String> identifier, jni::ref<java::util::Optional> classBound, jni::ref<java::util::List> interfaceBounds) { return base_::new_object(identifier, classBound, interfaceBounds); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jboolean equals(jni::ref<java::lang::Object> o) { return call_method<"equals", jboolean>(o); }
	jni::ref<java::lang::String> identifier() { return call_method<"identifier", jni::ref<java::lang::String>>(); }
	jni::ref<java::util::Optional> classBound() { return call_method<"classBound", jni::ref<java::util::Optional>>(); }
	jni::ref<java::util::List> interfaceBounds() { return call_method<"interfaceBounds", jni::ref<java::util::List>>(); }

protected:

	SignaturesImpl_TypeParamImpl(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_SIGNATURESIMPL_TYPEPARAMIMPL
