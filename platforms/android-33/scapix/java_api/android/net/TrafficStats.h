// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_NET_TRAFFICSTATS_FWD
#define SCAPIX_JAVA_API_ANDROID_NET_TRAFFICSTATS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::net { class TrafficStats; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::net::TrafficStats>
{
	static constexpr fixed_string class_name = "android/net/TrafficStats";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NET_TRAFFICSTATS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_NET_TRAFFICSTATS)
#define SCAPIX_JAVA_API_ANDROID_NET_TRAFFICSTATS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/FileDescriptor.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/net/DatagramSocket.h>
#include <scapix/java_api/java/net/Socket.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::net::TrafficStats : public jni::object_base<"android/net/TrafficStats",
	java::lang::Object>
{
public:

	static jint UNSUPPORTED() { return get_static_field<"UNSUPPORTED", jint>(); }

	static jni::ref<android::net::TrafficStats> new_object() { return base_::new_object(); }
	static void setThreadStatsTag(jint tag) { return call_static_method<"setThreadStatsTag", void>(tag); }
	static jint getAndSetThreadStatsTag(jint tag) { return call_static_method<"getAndSetThreadStatsTag", jint>(tag); }
	static jint getThreadStatsTag() { return call_static_method<"getThreadStatsTag", jint>(); }
	static void clearThreadStatsTag() { return call_static_method<"clearThreadStatsTag", void>(); }
	static void setThreadStatsUid(jint uid) { return call_static_method<"setThreadStatsUid", void>(uid); }
	static jint getThreadStatsUid() { return call_static_method<"getThreadStatsUid", jint>(); }
	static void clearThreadStatsUid() { return call_static_method<"clearThreadStatsUid", void>(); }
	static void tagSocket(jni::ref<java::net::Socket> socket) { return call_static_method<"tagSocket", void>(socket); }
	static void untagSocket(jni::ref<java::net::Socket> socket) { return call_static_method<"untagSocket", void>(socket); }
	static void tagDatagramSocket(jni::ref<java::net::DatagramSocket> socket) { return call_static_method<"tagDatagramSocket", void>(socket); }
	static void untagDatagramSocket(jni::ref<java::net::DatagramSocket> socket) { return call_static_method<"untagDatagramSocket", void>(socket); }
	static void tagFileDescriptor(jni::ref<java::io::FileDescriptor> fd) { return call_static_method<"tagFileDescriptor", void>(fd); }
	static void untagFileDescriptor(jni::ref<java::io::FileDescriptor> fd) { return call_static_method<"untagFileDescriptor", void>(fd); }
	static void incrementOperationCount(jint operationCount) { return call_static_method<"incrementOperationCount", void>(operationCount); }
	static void incrementOperationCount(jint tag, jint operationCount) { return call_static_method<"incrementOperationCount", void>(tag, operationCount); }
	static jlong getMobileTxPackets() { return call_static_method<"getMobileTxPackets", jlong>(); }
	static jlong getMobileRxPackets() { return call_static_method<"getMobileRxPackets", jlong>(); }
	static jlong getMobileTxBytes() { return call_static_method<"getMobileTxBytes", jlong>(); }
	static jlong getMobileRxBytes() { return call_static_method<"getMobileRxBytes", jlong>(); }
	static jlong getTxPackets(jni::ref<java::lang::String> iface) { return call_static_method<"getTxPackets", jlong>(iface); }
	static jlong getRxPackets(jni::ref<java::lang::String> iface) { return call_static_method<"getRxPackets", jlong>(iface); }
	static jlong getTxBytes(jni::ref<java::lang::String> iface) { return call_static_method<"getTxBytes", jlong>(iface); }
	static jlong getRxBytes(jni::ref<java::lang::String> iface) { return call_static_method<"getRxBytes", jlong>(iface); }
	static jlong getTotalTxPackets() { return call_static_method<"getTotalTxPackets", jlong>(); }
	static jlong getTotalRxPackets() { return call_static_method<"getTotalRxPackets", jlong>(); }
	static jlong getTotalTxBytes() { return call_static_method<"getTotalTxBytes", jlong>(); }
	static jlong getTotalRxBytes() { return call_static_method<"getTotalRxBytes", jlong>(); }
	static jlong getUidTxBytes(jint uid) { return call_static_method<"getUidTxBytes", jlong>(uid); }
	static jlong getUidRxBytes(jint uid) { return call_static_method<"getUidRxBytes", jlong>(uid); }
	static jlong getUidTxPackets(jint uid) { return call_static_method<"getUidTxPackets", jlong>(uid); }
	static jlong getUidRxPackets(jint uid) { return call_static_method<"getUidRxPackets", jlong>(uid); }
	static jlong getUidTcpTxBytes(jint uid) { return call_static_method<"getUidTcpTxBytes", jlong>(uid); }
	static jlong getUidTcpRxBytes(jint uid) { return call_static_method<"getUidTcpRxBytes", jlong>(uid); }
	static jlong getUidUdpTxBytes(jint uid) { return call_static_method<"getUidUdpTxBytes", jlong>(uid); }
	static jlong getUidUdpRxBytes(jint uid) { return call_static_method<"getUidUdpRxBytes", jlong>(uid); }
	static jlong getUidTcpTxSegments(jint uid) { return call_static_method<"getUidTcpTxSegments", jlong>(uid); }
	static jlong getUidTcpRxSegments(jint uid) { return call_static_method<"getUidTcpRxSegments", jlong>(uid); }
	static jlong getUidUdpTxPackets(jint uid) { return call_static_method<"getUidUdpTxPackets", jlong>(uid); }
	static jlong getUidUdpRxPackets(jint uid) { return call_static_method<"getUidUdpRxPackets", jlong>(uid); }

protected:

	TrafficStats(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NET_TRAFFICSTATS
