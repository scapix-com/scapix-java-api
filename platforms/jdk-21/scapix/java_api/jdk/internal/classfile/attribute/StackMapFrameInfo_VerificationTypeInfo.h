// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_ATTRIBUTE_STACKMAPFRAMEINFO_VERIFICATIONTYPEINFO_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_ATTRIBUTE_STACKMAPFRAMEINFO_VERIFICATIONTYPEINFO_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::classfile::attribute { class StackMapFrameInfo_VerificationTypeInfo; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::classfile::attribute::StackMapFrameInfo_VerificationTypeInfo>
{
	static constexpr fixed_string class_name = "jdk/internal/classfile/attribute/StackMapFrameInfo$VerificationTypeInfo";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_ATTRIBUTE_STACKMAPFRAMEINFO_VERIFICATIONTYPEINFO_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_ATTRIBUTE_STACKMAPFRAMEINFO_VERIFICATIONTYPEINFO)
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_ATTRIBUTE_STACKMAPFRAMEINFO_VERIFICATIONTYPEINFO

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::classfile::attribute::StackMapFrameInfo_VerificationTypeInfo : public jni::object_base<"jdk/internal/classfile/attribute/StackMapFrameInfo$VerificationTypeInfo",
	java::lang::Object>
{
public:

	jint tag() { return call_method<"tag", jint>(); }

protected:

	StackMapFrameInfo_VerificationTypeInfo(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_ATTRIBUTE_STACKMAPFRAMEINFO_VERIFICATIONTYPEINFO
