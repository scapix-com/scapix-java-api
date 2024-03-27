// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_MTP_MTPOBJECTINFO_FWD
#define SCAPIX_JAVA_API_ANDROID_MTP_MTPOBJECTINFO_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::mtp { class MtpObjectInfo; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::mtp::MtpObjectInfo>
{
	static constexpr fixed_string class_name = "android/mtp/MtpObjectInfo";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MTP_MTPOBJECTINFO_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_MTP_MTPOBJECTINFO)
#define SCAPIX_JAVA_API_ANDROID_MTP_MTPOBJECTINFO

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/android/mtp/MtpObjectInfo_Builder.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::mtp::MtpObjectInfo : public jni::object_base<"android/mtp/MtpObjectInfo",
	java::lang::Object>
{
public:

	using Builder = MtpObjectInfo_Builder;

	jint getObjectHandle() { return call_method<"getObjectHandle", jint>(); }
	jint getStorageId() { return call_method<"getStorageId", jint>(); }
	jint getFormat() { return call_method<"getFormat", jint>(); }
	jint getProtectionStatus() { return call_method<"getProtectionStatus", jint>(); }
	jint getCompressedSize() { return call_method<"getCompressedSize", jint>(); }
	jlong getCompressedSizeLong() { return call_method<"getCompressedSizeLong", jlong>(); }
	jint getThumbFormat() { return call_method<"getThumbFormat", jint>(); }
	jint getThumbCompressedSize() { return call_method<"getThumbCompressedSize", jint>(); }
	jlong getThumbCompressedSizeLong() { return call_method<"getThumbCompressedSizeLong", jlong>(); }
	jint getThumbPixWidth() { return call_method<"getThumbPixWidth", jint>(); }
	jlong getThumbPixWidthLong() { return call_method<"getThumbPixWidthLong", jlong>(); }
	jint getThumbPixHeight() { return call_method<"getThumbPixHeight", jint>(); }
	jlong getThumbPixHeightLong() { return call_method<"getThumbPixHeightLong", jlong>(); }
	jint getImagePixWidth() { return call_method<"getImagePixWidth", jint>(); }
	jlong getImagePixWidthLong() { return call_method<"getImagePixWidthLong", jlong>(); }
	jint getImagePixHeight() { return call_method<"getImagePixHeight", jint>(); }
	jlong getImagePixHeightLong() { return call_method<"getImagePixHeightLong", jlong>(); }
	jint getImagePixDepth() { return call_method<"getImagePixDepth", jint>(); }
	jlong getImagePixDepthLong() { return call_method<"getImagePixDepthLong", jlong>(); }
	jint getParent() { return call_method<"getParent", jint>(); }
	jint getAssociationType() { return call_method<"getAssociationType", jint>(); }
	jint getAssociationDesc() { return call_method<"getAssociationDesc", jint>(); }
	jint getSequenceNumber() { return call_method<"getSequenceNumber", jint>(); }
	jlong getSequenceNumberLong() { return call_method<"getSequenceNumberLong", jlong>(); }
	jni::ref<java::lang::String> getName() { return call_method<"getName", jni::ref<java::lang::String>>(); }
	jlong getDateCreated() { return call_method<"getDateCreated", jlong>(); }
	jlong getDateModified() { return call_method<"getDateModified", jlong>(); }
	jni::ref<java::lang::String> getKeywords() { return call_method<"getKeywords", jni::ref<java::lang::String>>(); }

protected:

	MtpObjectInfo(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MTP_MTPOBJECTINFO