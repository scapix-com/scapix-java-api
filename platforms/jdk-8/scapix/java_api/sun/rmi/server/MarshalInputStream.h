// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/io/ObjectInputStream.h>

#ifndef SCAPIX_JAVA_API_SUN_RMI_SERVER_MARSHALINPUTSTREAM_FWD
#define SCAPIX_JAVA_API_SUN_RMI_SERVER_MARSHALINPUTSTREAM_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::rmi::server { class MarshalInputStream; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::rmi::server::MarshalInputStream>
{
	static constexpr fixed_string class_name = "sun/rmi/server/MarshalInputStream";
	using base_classes = std::tuple<scapix::java_api::java::io::ObjectInputStream>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_RMI_SERVER_MARSHALINPUTSTREAM_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_RMI_SERVER_MARSHALINPUTSTREAM)
#define SCAPIX_JAVA_API_SUN_RMI_SERVER_MARSHALINPUTSTREAM

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/InputStream.h>
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/Runnable.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::rmi::server::MarshalInputStream : public jni::object_base<"sun/rmi/server/MarshalInputStream",
	java::io::ObjectInputStream>
{
public:

	static jni::ref<sun::rmi::server::MarshalInputStream> new_object(jni::ref<java::io::InputStream> p1) { return base_::new_object(p1); }
	jni::ref<java::lang::Runnable> getDoneCallback(jni::ref<java::lang::Object> p1) { return call_method<"getDoneCallback", jni::ref<java::lang::Runnable>>(p1); }
	void setDoneCallback(jni::ref<java::lang::Object> p1, jni::ref<java::lang::Runnable> p2) { return call_method<"setDoneCallback", void>(p1, p2); }
	void done() { return call_method<"done", void>(); }
	void close() { return call_method<"close", void>(); }

protected:

	MarshalInputStream(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_RMI_SERVER_MARSHALINPUTSTREAM
