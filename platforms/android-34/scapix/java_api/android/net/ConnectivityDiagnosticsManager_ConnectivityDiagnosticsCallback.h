// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_NET_CONNECTIVITYDIAGNOSTICSMANAGER_CONNECTIVITYDIAGNOSTICSCALLBACK_FWD
#define SCAPIX_JAVA_API_ANDROID_NET_CONNECTIVITYDIAGNOSTICSMANAGER_CONNECTIVITYDIAGNOSTICSCALLBACK_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::net { class ConnectivityDiagnosticsManager_ConnectivityDiagnosticsCallback; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::net::ConnectivityDiagnosticsManager_ConnectivityDiagnosticsCallback>
{
	static constexpr fixed_string class_name = "android/net/ConnectivityDiagnosticsManager$ConnectivityDiagnosticsCallback";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NET_CONNECTIVITYDIAGNOSTICSMANAGER_CONNECTIVITYDIAGNOSTICSCALLBACK_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_NET_CONNECTIVITYDIAGNOSTICSMANAGER_CONNECTIVITYDIAGNOSTICSCALLBACK)
#define SCAPIX_JAVA_API_ANDROID_NET_CONNECTIVITYDIAGNOSTICSMANAGER_CONNECTIVITYDIAGNOSTICSCALLBACK

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/net/ConnectivityDiagnosticsManager_ConnectivityReport.h>
#include <scapix/java_api/android/net/ConnectivityDiagnosticsManager_DataStallReport.h>
#include <scapix/java_api/android/net/Network.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::net::ConnectivityDiagnosticsManager_ConnectivityDiagnosticsCallback : public jni::object_base<"android/net/ConnectivityDiagnosticsManager$ConnectivityDiagnosticsCallback",
	java::lang::Object>
{
public:

	static jni::ref<android::net::ConnectivityDiagnosticsManager_ConnectivityDiagnosticsCallback> new_object() { return base_::new_object(); }
	void onConnectivityReportAvailable(jni::ref<android::net::ConnectivityDiagnosticsManager_ConnectivityReport> report) { return call_method<"onConnectivityReportAvailable", void>(report); }
	void onDataStallSuspected(jni::ref<android::net::ConnectivityDiagnosticsManager_DataStallReport> report) { return call_method<"onDataStallSuspected", void>(report); }
	void onNetworkConnectivityReported(jni::ref<android::net::Network> network, jboolean hasConnectivity) { return call_method<"onNetworkConnectivityReported", void>(network, hasConnectivity); }

protected:

	ConnectivityDiagnosticsManager_ConnectivityDiagnosticsCallback(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NET_CONNECTIVITYDIAGNOSTICSMANAGER_CONNECTIVITYDIAGNOSTICSCALLBACK
