// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/jdk/internal/classfile/Signature.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_SIGNATURE_REFTYPESIG_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_SIGNATURE_REFTYPESIG_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::classfile { class Signature_RefTypeSig; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::classfile::Signature_RefTypeSig>
{
	static constexpr fixed_string class_name = "jdk/internal/classfile/Signature$RefTypeSig";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::jdk::internal::classfile::Signature>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_SIGNATURE_REFTYPESIG_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_SIGNATURE_REFTYPESIG)
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_SIGNATURE_REFTYPESIG

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::classfile::Signature_RefTypeSig : public jni::object_base<"jdk/internal/classfile/Signature$RefTypeSig",
	java::lang::Object,
	jdk::internal::classfile::Signature>
{
public:


protected:

	Signature_RefTypeSig(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_SIGNATURE_REFTYPESIG