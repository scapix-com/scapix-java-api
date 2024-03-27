// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIACODECINFO_CODECPROFILELEVEL_FWD
#define SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIACODECINFO_CODECPROFILELEVEL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::media { class MediaCodecInfo_CodecProfileLevel; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::media::MediaCodecInfo_CodecProfileLevel>
{
	static constexpr fixed_string class_name = "android/media/MediaCodecInfo$CodecProfileLevel";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIACODECINFO_CODECPROFILELEVEL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIACODECINFO_CODECPROFILELEVEL)
#define SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIACODECINFO_CODECPROFILELEVEL

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::media::MediaCodecInfo_CodecProfileLevel : public jni::object_base<"android/media/MediaCodecInfo$CodecProfileLevel",
	java::lang::Object>
{
public:

	static jint AACObjectELD() { return get_static_field<"AACObjectELD", jint>(); }
	static jint AACObjectERLC() { return get_static_field<"AACObjectERLC", jint>(); }
	static jint AACObjectHE() { return get_static_field<"AACObjectHE", jint>(); }
	static jint AACObjectHE_PS() { return get_static_field<"AACObjectHE_PS", jint>(); }
	static jint AACObjectLC() { return get_static_field<"AACObjectLC", jint>(); }
	static jint AACObjectLD() { return get_static_field<"AACObjectLD", jint>(); }
	static jint AACObjectLTP() { return get_static_field<"AACObjectLTP", jint>(); }
	static jint AACObjectMain() { return get_static_field<"AACObjectMain", jint>(); }
	static jint AACObjectSSR() { return get_static_field<"AACObjectSSR", jint>(); }
	static jint AACObjectScalable() { return get_static_field<"AACObjectScalable", jint>(); }
	static jint AVCLevel1() { return get_static_field<"AVCLevel1", jint>(); }
	static jint AVCLevel11() { return get_static_field<"AVCLevel11", jint>(); }
	static jint AVCLevel12() { return get_static_field<"AVCLevel12", jint>(); }
	static jint AVCLevel13() { return get_static_field<"AVCLevel13", jint>(); }
	static jint AVCLevel1b() { return get_static_field<"AVCLevel1b", jint>(); }
	static jint AVCLevel2() { return get_static_field<"AVCLevel2", jint>(); }
	static jint AVCLevel21() { return get_static_field<"AVCLevel21", jint>(); }
	static jint AVCLevel22() { return get_static_field<"AVCLevel22", jint>(); }
	static jint AVCLevel3() { return get_static_field<"AVCLevel3", jint>(); }
	static jint AVCLevel31() { return get_static_field<"AVCLevel31", jint>(); }
	static jint AVCLevel32() { return get_static_field<"AVCLevel32", jint>(); }
	static jint AVCLevel4() { return get_static_field<"AVCLevel4", jint>(); }
	static jint AVCLevel41() { return get_static_field<"AVCLevel41", jint>(); }
	static jint AVCLevel42() { return get_static_field<"AVCLevel42", jint>(); }
	static jint AVCLevel5() { return get_static_field<"AVCLevel5", jint>(); }
	static jint AVCLevel51() { return get_static_field<"AVCLevel51", jint>(); }
	static jint AVCLevel52() { return get_static_field<"AVCLevel52", jint>(); }
	static jint AVCProfileBaseline() { return get_static_field<"AVCProfileBaseline", jint>(); }
	static jint AVCProfileExtended() { return get_static_field<"AVCProfileExtended", jint>(); }
	static jint AVCProfileHigh() { return get_static_field<"AVCProfileHigh", jint>(); }
	static jint AVCProfileHigh10() { return get_static_field<"AVCProfileHigh10", jint>(); }
	static jint AVCProfileHigh422() { return get_static_field<"AVCProfileHigh422", jint>(); }
	static jint AVCProfileHigh444() { return get_static_field<"AVCProfileHigh444", jint>(); }
	static jint AVCProfileMain() { return get_static_field<"AVCProfileMain", jint>(); }
	static jint H263Level10() { return get_static_field<"H263Level10", jint>(); }
	static jint H263Level20() { return get_static_field<"H263Level20", jint>(); }
	static jint H263Level30() { return get_static_field<"H263Level30", jint>(); }
	static jint H263Level40() { return get_static_field<"H263Level40", jint>(); }
	static jint H263Level45() { return get_static_field<"H263Level45", jint>(); }
	static jint H263Level50() { return get_static_field<"H263Level50", jint>(); }
	static jint H263Level60() { return get_static_field<"H263Level60", jint>(); }
	static jint H263Level70() { return get_static_field<"H263Level70", jint>(); }
	static jint H263ProfileBackwardCompatible() { return get_static_field<"H263ProfileBackwardCompatible", jint>(); }
	static jint H263ProfileBaseline() { return get_static_field<"H263ProfileBaseline", jint>(); }
	static jint H263ProfileH320Coding() { return get_static_field<"H263ProfileH320Coding", jint>(); }
	static jint H263ProfileHighCompression() { return get_static_field<"H263ProfileHighCompression", jint>(); }
	static jint H263ProfileHighLatency() { return get_static_field<"H263ProfileHighLatency", jint>(); }
	static jint H263ProfileISWV2() { return get_static_field<"H263ProfileISWV2", jint>(); }
	static jint H263ProfileISWV3() { return get_static_field<"H263ProfileISWV3", jint>(); }
	static jint H263ProfileInterlace() { return get_static_field<"H263ProfileInterlace", jint>(); }
	static jint H263ProfileInternet() { return get_static_field<"H263ProfileInternet", jint>(); }
	static jint HEVCHighTierLevel1() { return get_static_field<"HEVCHighTierLevel1", jint>(); }
	static jint HEVCHighTierLevel2() { return get_static_field<"HEVCHighTierLevel2", jint>(); }
	static jint HEVCHighTierLevel21() { return get_static_field<"HEVCHighTierLevel21", jint>(); }
	static jint HEVCHighTierLevel3() { return get_static_field<"HEVCHighTierLevel3", jint>(); }
	static jint HEVCHighTierLevel31() { return get_static_field<"HEVCHighTierLevel31", jint>(); }
	static jint HEVCHighTierLevel4() { return get_static_field<"HEVCHighTierLevel4", jint>(); }
	static jint HEVCHighTierLevel41() { return get_static_field<"HEVCHighTierLevel41", jint>(); }
	static jint HEVCHighTierLevel5() { return get_static_field<"HEVCHighTierLevel5", jint>(); }
	static jint HEVCHighTierLevel51() { return get_static_field<"HEVCHighTierLevel51", jint>(); }
	static jint HEVCHighTierLevel52() { return get_static_field<"HEVCHighTierLevel52", jint>(); }
	static jint HEVCHighTierLevel6() { return get_static_field<"HEVCHighTierLevel6", jint>(); }
	static jint HEVCHighTierLevel61() { return get_static_field<"HEVCHighTierLevel61", jint>(); }
	static jint HEVCHighTierLevel62() { return get_static_field<"HEVCHighTierLevel62", jint>(); }
	static jint HEVCMainTierLevel1() { return get_static_field<"HEVCMainTierLevel1", jint>(); }
	static jint HEVCMainTierLevel2() { return get_static_field<"HEVCMainTierLevel2", jint>(); }
	static jint HEVCMainTierLevel21() { return get_static_field<"HEVCMainTierLevel21", jint>(); }
	static jint HEVCMainTierLevel3() { return get_static_field<"HEVCMainTierLevel3", jint>(); }
	static jint HEVCMainTierLevel31() { return get_static_field<"HEVCMainTierLevel31", jint>(); }
	static jint HEVCMainTierLevel4() { return get_static_field<"HEVCMainTierLevel4", jint>(); }
	static jint HEVCMainTierLevel41() { return get_static_field<"HEVCMainTierLevel41", jint>(); }
	static jint HEVCMainTierLevel5() { return get_static_field<"HEVCMainTierLevel5", jint>(); }
	static jint HEVCMainTierLevel51() { return get_static_field<"HEVCMainTierLevel51", jint>(); }
	static jint HEVCMainTierLevel52() { return get_static_field<"HEVCMainTierLevel52", jint>(); }
	static jint HEVCMainTierLevel6() { return get_static_field<"HEVCMainTierLevel6", jint>(); }
	static jint HEVCMainTierLevel61() { return get_static_field<"HEVCMainTierLevel61", jint>(); }
	static jint HEVCMainTierLevel62() { return get_static_field<"HEVCMainTierLevel62", jint>(); }
	static jint HEVCProfileMain() { return get_static_field<"HEVCProfileMain", jint>(); }
	static jint HEVCProfileMain10() { return get_static_field<"HEVCProfileMain10", jint>(); }
	static jint MPEG2LevelH14() { return get_static_field<"MPEG2LevelH14", jint>(); }
	static jint MPEG2LevelHL() { return get_static_field<"MPEG2LevelHL", jint>(); }
	static jint MPEG2LevelLL() { return get_static_field<"MPEG2LevelLL", jint>(); }
	static jint MPEG2LevelML() { return get_static_field<"MPEG2LevelML", jint>(); }
	static jint MPEG2Profile422() { return get_static_field<"MPEG2Profile422", jint>(); }
	static jint MPEG2ProfileHigh() { return get_static_field<"MPEG2ProfileHigh", jint>(); }
	static jint MPEG2ProfileMain() { return get_static_field<"MPEG2ProfileMain", jint>(); }
	static jint MPEG2ProfileSNR() { return get_static_field<"MPEG2ProfileSNR", jint>(); }
	static jint MPEG2ProfileSimple() { return get_static_field<"MPEG2ProfileSimple", jint>(); }
	static jint MPEG2ProfileSpatial() { return get_static_field<"MPEG2ProfileSpatial", jint>(); }
	static jint MPEG4Level0() { return get_static_field<"MPEG4Level0", jint>(); }
	static jint MPEG4Level0b() { return get_static_field<"MPEG4Level0b", jint>(); }
	static jint MPEG4Level1() { return get_static_field<"MPEG4Level1", jint>(); }
	static jint MPEG4Level2() { return get_static_field<"MPEG4Level2", jint>(); }
	static jint MPEG4Level3() { return get_static_field<"MPEG4Level3", jint>(); }
	static jint MPEG4Level4() { return get_static_field<"MPEG4Level4", jint>(); }
	static jint MPEG4Level4a() { return get_static_field<"MPEG4Level4a", jint>(); }
	static jint MPEG4Level5() { return get_static_field<"MPEG4Level5", jint>(); }
	static jint MPEG4ProfileAdvancedCoding() { return get_static_field<"MPEG4ProfileAdvancedCoding", jint>(); }
	static jint MPEG4ProfileAdvancedCore() { return get_static_field<"MPEG4ProfileAdvancedCore", jint>(); }
	static jint MPEG4ProfileAdvancedRealTime() { return get_static_field<"MPEG4ProfileAdvancedRealTime", jint>(); }
	static jint MPEG4ProfileAdvancedScalable() { return get_static_field<"MPEG4ProfileAdvancedScalable", jint>(); }
	static jint MPEG4ProfileAdvancedSimple() { return get_static_field<"MPEG4ProfileAdvancedSimple", jint>(); }
	static jint MPEG4ProfileBasicAnimated() { return get_static_field<"MPEG4ProfileBasicAnimated", jint>(); }
	static jint MPEG4ProfileCore() { return get_static_field<"MPEG4ProfileCore", jint>(); }
	static jint MPEG4ProfileCoreScalable() { return get_static_field<"MPEG4ProfileCoreScalable", jint>(); }
	static jint MPEG4ProfileHybrid() { return get_static_field<"MPEG4ProfileHybrid", jint>(); }
	static jint MPEG4ProfileMain() { return get_static_field<"MPEG4ProfileMain", jint>(); }
	static jint MPEG4ProfileNbit() { return get_static_field<"MPEG4ProfileNbit", jint>(); }
	static jint MPEG4ProfileScalableTexture() { return get_static_field<"MPEG4ProfileScalableTexture", jint>(); }
	static jint MPEG4ProfileSimple() { return get_static_field<"MPEG4ProfileSimple", jint>(); }
	static jint MPEG4ProfileSimpleFBA() { return get_static_field<"MPEG4ProfileSimpleFBA", jint>(); }
	static jint MPEG4ProfileSimpleFace() { return get_static_field<"MPEG4ProfileSimpleFace", jint>(); }
	static jint MPEG4ProfileSimpleScalable() { return get_static_field<"MPEG4ProfileSimpleScalable", jint>(); }
	static jint VP8Level_Version0() { return get_static_field<"VP8Level_Version0", jint>(); }
	static jint VP8Level_Version1() { return get_static_field<"VP8Level_Version1", jint>(); }
	static jint VP8Level_Version2() { return get_static_field<"VP8Level_Version2", jint>(); }
	static jint VP8Level_Version3() { return get_static_field<"VP8Level_Version3", jint>(); }
	static jint VP8ProfileMain() { return get_static_field<"VP8ProfileMain", jint>(); }
	jint level() { return get_field<"level", jint>(); }
	void level(jint v) { set_field<"level", jint>(v); }
	jint profile() { return get_field<"profile", jint>(); }
	void profile(jint v) { set_field<"profile", jint>(v); }

	static jni::ref<android::media::MediaCodecInfo_CodecProfileLevel> new_object() { return base_::new_object(); }

protected:

	MediaCodecInfo_CodecProfileLevel(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIACODECINFO_CODECPROFILELEVEL
