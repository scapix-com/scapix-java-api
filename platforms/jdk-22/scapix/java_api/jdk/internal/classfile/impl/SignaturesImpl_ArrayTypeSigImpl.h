// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Record.h>
#include <scapix/java_api/java/lang/classfile/Signature_ArrayTypeSig.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_SIGNATURESIMPL_ARRAYTYPESIGIMPL_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_SIGNATURESIMPL_ARRAYTYPESIGIMPL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::classfile::impl { class SignaturesImpl_ArrayTypeSigImpl; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::classfile::impl::SignaturesImpl_ArrayTypeSigImpl>
{
	static constexpr fixed_string class_name = "jdk/internal/classfile/impl/SignaturesImpl$ArrayTypeSigImpl";
	using base_classes = std::tuple<scapix::java_api::java::lang::Record, scapix::java_api::java::lang::classfile::Signature_ArrayTypeSig>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_SIGNATURESIMPL_ARRAYTYPESIGIMPL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_SIGNATURESIMPL_ARRAYTYPESIGIMPL)
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_SIGNATURESIMPL_ARRAYTYPESIGIMPL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/classfile/Signature.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::classfile::impl::SignaturesImpl_ArrayTypeSigImpl : public jni::object_base<"jdk/internal/classfile/impl/SignaturesImpl$ArrayTypeSigImpl",
	java::lang::Record,
	java::lang::classfile::Signature_ArrayTypeSig>
{
public:

	static jni::ref<jdk::internal::classfile::impl::SignaturesImpl_ArrayTypeSigImpl> new_object(jint arrayDepth, jni::ref<java::lang::classfile::Signature> elemType) { return base_::new_object(arrayDepth, elemType); }
	jni::ref<java::lang::classfile::Signature> componentSignature() { return call_method<"componentSignature", jni::ref<java::lang::classfile::Signature>>(); }
	jni::ref<java::lang::String> signatureString() { return call_method<"signatureString", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jboolean equals(jni::ref<java::lang::Object> o) { return call_method<"equals", jboolean>(o); }
	jint arrayDepth() { return call_method<"arrayDepth", jint>(); }
	jni::ref<java::lang::classfile::Signature> elemType() { return call_method<"elemType", jni::ref<java::lang::classfile::Signature>>(); }

protected:

	SignaturesImpl_ArrayTypeSigImpl(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_SIGNATURESIMPL_ARRAYTYPESIGIMPL
