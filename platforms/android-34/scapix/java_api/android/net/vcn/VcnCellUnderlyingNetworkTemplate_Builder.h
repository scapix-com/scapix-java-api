// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_NET_VCN_VCNCELLUNDERLYINGNETWORKTEMPLATE_BUILDER_FWD
#define SCAPIX_JAVA_API_ANDROID_NET_VCN_VCNCELLUNDERLYINGNETWORKTEMPLATE_BUILDER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::net::vcn { class VcnCellUnderlyingNetworkTemplate_Builder; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::net::vcn::VcnCellUnderlyingNetworkTemplate_Builder>
{
	static constexpr fixed_string class_name = "android/net/vcn/VcnCellUnderlyingNetworkTemplate$Builder";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NET_VCN_VCNCELLUNDERLYINGNETWORKTEMPLATE_BUILDER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_NET_VCN_VCNCELLUNDERLYINGNETWORKTEMPLATE_BUILDER)
#define SCAPIX_JAVA_API_ANDROID_NET_VCN_VCNCELLUNDERLYINGNETWORKTEMPLATE_BUILDER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/net/vcn/VcnCellUnderlyingNetworkTemplate.h>
#include <scapix/java_api/java/util/Set.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::net::vcn::VcnCellUnderlyingNetworkTemplate_Builder : public jni::object_base<"android/net/vcn/VcnCellUnderlyingNetworkTemplate$Builder",
	java::lang::Object>
{
public:

	static jni::ref<android::net::vcn::VcnCellUnderlyingNetworkTemplate_Builder> new_object() { return base_::new_object(); }
	jni::ref<android::net::vcn::VcnCellUnderlyingNetworkTemplate_Builder> setMetered(jint matchCriteria) { return call_method<"setMetered", jni::ref<android::net::vcn::VcnCellUnderlyingNetworkTemplate_Builder>>(matchCriteria); }
	jni::ref<android::net::vcn::VcnCellUnderlyingNetworkTemplate_Builder> setOperatorPlmnIds(jni::ref<java::util::Set> operatorPlmnIds) { return call_method<"setOperatorPlmnIds", jni::ref<android::net::vcn::VcnCellUnderlyingNetworkTemplate_Builder>>(operatorPlmnIds); }
	jni::ref<android::net::vcn::VcnCellUnderlyingNetworkTemplate_Builder> setSimSpecificCarrierIds(jni::ref<java::util::Set> simSpecificCarrierIds) { return call_method<"setSimSpecificCarrierIds", jni::ref<android::net::vcn::VcnCellUnderlyingNetworkTemplate_Builder>>(simSpecificCarrierIds); }
	jni::ref<android::net::vcn::VcnCellUnderlyingNetworkTemplate_Builder> setRoaming(jint matchCriteria) { return call_method<"setRoaming", jni::ref<android::net::vcn::VcnCellUnderlyingNetworkTemplate_Builder>>(matchCriteria); }
	jni::ref<android::net::vcn::VcnCellUnderlyingNetworkTemplate_Builder> setOpportunistic(jint matchCriteria) { return call_method<"setOpportunistic", jni::ref<android::net::vcn::VcnCellUnderlyingNetworkTemplate_Builder>>(matchCriteria); }
	jni::ref<android::net::vcn::VcnCellUnderlyingNetworkTemplate_Builder> setMinUpstreamBandwidthKbps(jint minEntryUpstreamBandwidthKbps, jint minExitUpstreamBandwidthKbps) { return call_method<"setMinUpstreamBandwidthKbps", jni::ref<android::net::vcn::VcnCellUnderlyingNetworkTemplate_Builder>>(minEntryUpstreamBandwidthKbps, minExitUpstreamBandwidthKbps); }
	jni::ref<android::net::vcn::VcnCellUnderlyingNetworkTemplate_Builder> setMinDownstreamBandwidthKbps(jint minEntryDownstreamBandwidthKbps, jint minExitDownstreamBandwidthKbps) { return call_method<"setMinDownstreamBandwidthKbps", jni::ref<android::net::vcn::VcnCellUnderlyingNetworkTemplate_Builder>>(minEntryDownstreamBandwidthKbps, minExitDownstreamBandwidthKbps); }
	jni::ref<android::net::vcn::VcnCellUnderlyingNetworkTemplate_Builder> setCbs(jint matchCriteria) { return call_method<"setCbs", jni::ref<android::net::vcn::VcnCellUnderlyingNetworkTemplate_Builder>>(matchCriteria); }
	jni::ref<android::net::vcn::VcnCellUnderlyingNetworkTemplate_Builder> setDun(jint matchCriteria) { return call_method<"setDun", jni::ref<android::net::vcn::VcnCellUnderlyingNetworkTemplate_Builder>>(matchCriteria); }
	jni::ref<android::net::vcn::VcnCellUnderlyingNetworkTemplate_Builder> setIms(jint matchCriteria) { return call_method<"setIms", jni::ref<android::net::vcn::VcnCellUnderlyingNetworkTemplate_Builder>>(matchCriteria); }
	jni::ref<android::net::vcn::VcnCellUnderlyingNetworkTemplate_Builder> setInternet(jint matchCriteria) { return call_method<"setInternet", jni::ref<android::net::vcn::VcnCellUnderlyingNetworkTemplate_Builder>>(matchCriteria); }
	jni::ref<android::net::vcn::VcnCellUnderlyingNetworkTemplate_Builder> setMms(jint matchCriteria) { return call_method<"setMms", jni::ref<android::net::vcn::VcnCellUnderlyingNetworkTemplate_Builder>>(matchCriteria); }
	jni::ref<android::net::vcn::VcnCellUnderlyingNetworkTemplate_Builder> setRcs(jint matchCriteria) { return call_method<"setRcs", jni::ref<android::net::vcn::VcnCellUnderlyingNetworkTemplate_Builder>>(matchCriteria); }
	jni::ref<android::net::vcn::VcnCellUnderlyingNetworkTemplate> build() { return call_method<"build", jni::ref<android::net::vcn::VcnCellUnderlyingNetworkTemplate>>(); }

protected:

	VcnCellUnderlyingNetworkTemplate_Builder(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NET_VCN_VCNCELLUNDERLYINGNETWORKTEMPLATE_BUILDER
