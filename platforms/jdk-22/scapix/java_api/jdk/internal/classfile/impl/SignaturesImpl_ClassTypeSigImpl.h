// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Record.h>
#include <scapix/java_api/java/lang/classfile/Signature_ClassTypeSig.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_SIGNATURESIMPL_CLASSTYPESIGIMPL_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_SIGNATURESIMPL_CLASSTYPESIGIMPL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::classfile::impl { class SignaturesImpl_ClassTypeSigImpl; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::classfile::impl::SignaturesImpl_ClassTypeSigImpl>
{
	static constexpr fixed_string class_name = "jdk/internal/classfile/impl/SignaturesImpl$ClassTypeSigImpl";
	using base_classes = std::tuple<scapix::java_api::java::lang::Record, scapix::java_api::java::lang::classfile::Signature_ClassTypeSig>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_SIGNATURESIMPL_CLASSTYPESIGIMPL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_SIGNATURESIMPL_CLASSTYPESIGIMPL)
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_SIGNATURESIMPL_CLASSTYPESIGIMPL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/List.h>
#include <scapix/java_api/java/util/Optional.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::classfile::impl::SignaturesImpl_ClassTypeSigImpl : public jni::object_base<"jdk/internal/classfile/impl/SignaturesImpl$ClassTypeSigImpl",
	java::lang::Record,
	java::lang::classfile::Signature_ClassTypeSig>
{
public:

	static jni::ref<jdk::internal::classfile::impl::SignaturesImpl_ClassTypeSigImpl> new_object(jni::ref<java::util::Optional> outerType, jni::ref<java::lang::String> className, jni::ref<java::util::List> typeArgs) { return base_::new_object(outerType, className, typeArgs); }
	jni::ref<java::lang::String> signatureString() { return call_method<"signatureString", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jboolean equals(jni::ref<java::lang::Object> o) { return call_method<"equals", jboolean>(o); }
	jni::ref<java::util::Optional> outerType() { return call_method<"outerType", jni::ref<java::util::Optional>>(); }
	jni::ref<java::lang::String> className() { return call_method<"className", jni::ref<java::lang::String>>(); }
	jni::ref<java::util::List> typeArgs() { return call_method<"typeArgs", jni::ref<java::util::List>>(); }

protected:

	SignaturesImpl_ClassTypeSigImpl(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_SIGNATURESIMPL_CLASSTYPESIGIMPL
