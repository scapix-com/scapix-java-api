// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Enum.h>
#include <scapix/java_api/java/lang/classfile/attribute/StackMapFrameInfo_VerificationTypeInfo.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_ATTRIBUTE_STACKMAPFRAMEINFO_SIMPLEVERIFICATIONTYPEINFO_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_ATTRIBUTE_STACKMAPFRAMEINFO_SIMPLEVERIFICATIONTYPEINFO_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang::classfile::attribute { class StackMapFrameInfo_SimpleVerificationTypeInfo; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::classfile::attribute::StackMapFrameInfo_SimpleVerificationTypeInfo>
{
	static constexpr fixed_string class_name = "java/lang/classfile/attribute/StackMapFrameInfo$SimpleVerificationTypeInfo";
	using base_classes = std::tuple<scapix::java_api::java::lang::Enum, scapix::java_api::java::lang::classfile::attribute::StackMapFrameInfo_VerificationTypeInfo>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_ATTRIBUTE_STACKMAPFRAMEINFO_SIMPLEVERIFICATIONTYPEINFO_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_ATTRIBUTE_STACKMAPFRAMEINFO_SIMPLEVERIFICATIONTYPEINFO)
#define SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_ATTRIBUTE_STACKMAPFRAMEINFO_SIMPLEVERIFICATIONTYPEINFO

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::lang::classfile::attribute::StackMapFrameInfo_SimpleVerificationTypeInfo : public jni::object_base<"java/lang/classfile/attribute/StackMapFrameInfo$SimpleVerificationTypeInfo",
	java::lang::Enum,
	java::lang::classfile::attribute::StackMapFrameInfo_VerificationTypeInfo>
{
public:

	static jni::ref<java::lang::classfile::attribute::StackMapFrameInfo_SimpleVerificationTypeInfo> ITEM_TOP() { return get_static_field<"ITEM_TOP", jni::ref<java::lang::classfile::attribute::StackMapFrameInfo_SimpleVerificationTypeInfo>>(); }
	static jni::ref<java::lang::classfile::attribute::StackMapFrameInfo_SimpleVerificationTypeInfo> ITEM_INTEGER() { return get_static_field<"ITEM_INTEGER", jni::ref<java::lang::classfile::attribute::StackMapFrameInfo_SimpleVerificationTypeInfo>>(); }
	static jni::ref<java::lang::classfile::attribute::StackMapFrameInfo_SimpleVerificationTypeInfo> ITEM_FLOAT() { return get_static_field<"ITEM_FLOAT", jni::ref<java::lang::classfile::attribute::StackMapFrameInfo_SimpleVerificationTypeInfo>>(); }
	static jni::ref<java::lang::classfile::attribute::StackMapFrameInfo_SimpleVerificationTypeInfo> ITEM_DOUBLE() { return get_static_field<"ITEM_DOUBLE", jni::ref<java::lang::classfile::attribute::StackMapFrameInfo_SimpleVerificationTypeInfo>>(); }
	static jni::ref<java::lang::classfile::attribute::StackMapFrameInfo_SimpleVerificationTypeInfo> ITEM_LONG() { return get_static_field<"ITEM_LONG", jni::ref<java::lang::classfile::attribute::StackMapFrameInfo_SimpleVerificationTypeInfo>>(); }
	static jni::ref<java::lang::classfile::attribute::StackMapFrameInfo_SimpleVerificationTypeInfo> ITEM_NULL() { return get_static_field<"ITEM_NULL", jni::ref<java::lang::classfile::attribute::StackMapFrameInfo_SimpleVerificationTypeInfo>>(); }
	static jni::ref<java::lang::classfile::attribute::StackMapFrameInfo_SimpleVerificationTypeInfo> ITEM_UNINITIALIZED_THIS() { return get_static_field<"ITEM_UNINITIALIZED_THIS", jni::ref<java::lang::classfile::attribute::StackMapFrameInfo_SimpleVerificationTypeInfo>>(); }

	static jni::ref<jni::array<java::lang::classfile::attribute::StackMapFrameInfo_SimpleVerificationTypeInfo>> values() { return call_static_method<"values", jni::ref<jni::array<java::lang::classfile::attribute::StackMapFrameInfo_SimpleVerificationTypeInfo>>>(); }
	static jni::ref<java::lang::classfile::attribute::StackMapFrameInfo_SimpleVerificationTypeInfo> valueOf(jni::ref<java::lang::String> name) { return call_static_method<"valueOf", jni::ref<java::lang::classfile::attribute::StackMapFrameInfo_SimpleVerificationTypeInfo>>(name); }
	jint tag() { return call_method<"tag", jint>(); }

protected:

	StackMapFrameInfo_SimpleVerificationTypeInfo(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_ATTRIBUTE_STACKMAPFRAMEINFO_SIMPLEVERIFICATIONTYPEINFO