// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_VERIFIER_VERIFICATIONTABLE_STACKMAPSTREAM_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_VERIFIER_VERIFICATIONTABLE_STACKMAPSTREAM_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::classfile::impl::verifier { class VerificationTable_StackMapStream; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::classfile::impl::verifier::VerificationTable_StackMapStream>
{
	static constexpr fixed_string class_name = "jdk/internal/classfile/impl/verifier/VerificationTable$StackMapStream";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_VERIFIER_VERIFICATIONTABLE_STACKMAPSTREAM_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_VERIFIER_VERIFICATIONTABLE_STACKMAPSTREAM)
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_VERIFIER_VERIFICATIONTABLE_STACKMAPSTREAM

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class jdk::internal::classfile::impl::verifier::VerificationTable_StackMapStream : public jni::object_base<"jdk/internal/classfile/impl/verifier/VerificationTable$StackMapStream",
	java::lang::Object>
{
public:


protected:

	VerificationTable_StackMapStream(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_VERIFIER_VERIFICATIONTABLE_STACKMAPSTREAM
