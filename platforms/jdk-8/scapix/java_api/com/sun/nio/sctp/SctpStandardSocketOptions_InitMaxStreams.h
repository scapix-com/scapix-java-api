// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_NIO_SCTP_SCTPSTANDARDSOCKETOPTIONS_INITMAXSTREAMS_FWD
#define SCAPIX_JAVA_API_COM_SUN_NIO_SCTP_SCTPSTANDARDSOCKETOPTIONS_INITMAXSTREAMS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::nio::sctp { class SctpStandardSocketOptions_InitMaxStreams; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::nio::sctp::SctpStandardSocketOptions_InitMaxStreams>
{
	static constexpr fixed_string class_name = "com/sun/nio/sctp/SctpStandardSocketOptions$InitMaxStreams";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_NIO_SCTP_SCTPSTANDARDSOCKETOPTIONS_INITMAXSTREAMS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_NIO_SCTP_SCTPSTANDARDSOCKETOPTIONS_INITMAXSTREAMS)
#define SCAPIX_JAVA_API_COM_SUN_NIO_SCTP_SCTPSTANDARDSOCKETOPTIONS_INITMAXSTREAMS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::nio::sctp::SctpStandardSocketOptions_InitMaxStreams : public jni::object_base<"com/sun/nio/sctp/SctpStandardSocketOptions$InitMaxStreams",
	java::lang::Object>
{
public:

	static jni::ref<com::sun::nio::sctp::SctpStandardSocketOptions_InitMaxStreams> create(jint p1, jint p2) { return call_static_method<"create", jni::ref<com::sun::nio::sctp::SctpStandardSocketOptions_InitMaxStreams>>(p1, p2); }
	jint maxInStreams() { return call_method<"maxInStreams", jint>(); }
	jint maxOutStreams() { return call_method<"maxOutStreams", jint>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jboolean equals(jni::ref<java::lang::Object> p1) { return call_method<"equals", jboolean>(p1); }
	jint hashCode() { return call_method<"hashCode", jint>(); }

protected:

	SctpStandardSocketOptions_InitMaxStreams(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_NIO_SCTP_SCTPSTANDARDSOCKETOPTIONS_INITMAXSTREAMS
