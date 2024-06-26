// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_SYSTEM_STRUCTMSGHDR_FWD
#define SCAPIX_JAVA_API_ANDROID_SYSTEM_STRUCTMSGHDR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::system { class StructMsghdr; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::system::StructMsghdr>
{
	static constexpr fixed_string class_name = "android/system/StructMsghdr";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_SYSTEM_STRUCTMSGHDR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_SYSTEM_STRUCTMSGHDR)
#define SCAPIX_JAVA_API_ANDROID_SYSTEM_STRUCTMSGHDR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/system/StructCmsghdr.h>
#include <scapix/java_api/java/net/SocketAddress.h>
#include <scapix/java_api/java/nio/ByteBuffer.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::system::StructMsghdr : public jni::object_base<"android/system/StructMsghdr",
	java::lang::Object>
{
public:

	jni::ref<jni::array<android::system::StructCmsghdr>> msg_control() { return get_field<"msg_control", jni::ref<jni::array<android::system::StructCmsghdr>>>(); }
	void msg_control(jni::ref<jni::array<android::system::StructCmsghdr>> v) { set_field<"msg_control", jni::ref<jni::array<android::system::StructCmsghdr>>>(v); }
	jint msg_flags() { return get_field<"msg_flags", jint>(); }
	void msg_flags(jint v) { set_field<"msg_flags", jint>(v); }
	jni::ref<jni::array<java::nio::ByteBuffer>> msg_iov() { return get_field<"msg_iov", jni::ref<jni::array<java::nio::ByteBuffer>>>(); }
	jni::ref<java::net::SocketAddress> msg_name() { return get_field<"msg_name", jni::ref<java::net::SocketAddress>>(); }
	void msg_name(jni::ref<java::net::SocketAddress> v) { set_field<"msg_name", jni::ref<java::net::SocketAddress>>(v); }

	static jni::ref<android::system::StructMsghdr> new_object(jni::ref<java::net::SocketAddress> msg_name, jni::ref<jni::array<java::nio::ByteBuffer>> msg_iov, jni::ref<jni::array<android::system::StructCmsghdr>> msg_control, jint msg_flags) { return base_::new_object(msg_name, msg_iov, msg_control, msg_flags); }

protected:

	StructMsghdr(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_SYSTEM_STRUCTMSGHDR
