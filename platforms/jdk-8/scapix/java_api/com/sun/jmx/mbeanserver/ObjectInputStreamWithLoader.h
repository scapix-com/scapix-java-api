// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/io/ObjectInputStream.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_JMX_MBEANSERVER_OBJECTINPUTSTREAMWITHLOADER_FWD
#define SCAPIX_JAVA_API_COM_SUN_JMX_MBEANSERVER_OBJECTINPUTSTREAMWITHLOADER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::jmx::mbeanserver { class ObjectInputStreamWithLoader; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::jmx::mbeanserver::ObjectInputStreamWithLoader>
{
	static constexpr fixed_string class_name = "com/sun/jmx/mbeanserver/ObjectInputStreamWithLoader";
	using base_classes = std::tuple<scapix::java_api::java::io::ObjectInputStream>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JMX_MBEANSERVER_OBJECTINPUTSTREAMWITHLOADER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_JMX_MBEANSERVER_OBJECTINPUTSTREAMWITHLOADER)
#define SCAPIX_JAVA_API_COM_SUN_JMX_MBEANSERVER_OBJECTINPUTSTREAMWITHLOADER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/InputStream.h>
#include <scapix/java_api/java/lang/ClassLoader.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class com::sun::jmx::mbeanserver::ObjectInputStreamWithLoader : public jni::object_base<"com/sun/jmx/mbeanserver/ObjectInputStreamWithLoader",
	java::io::ObjectInputStream>
{
public:

	static jni::ref<com::sun::jmx::mbeanserver::ObjectInputStreamWithLoader> new_object(jni::ref<java::io::InputStream> p1, jni::ref<java::lang::ClassLoader> p2) { return base_::new_object(p1, p2); }

protected:

	ObjectInputStreamWithLoader(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JMX_MBEANSERVER_OBJECTINPUTSTREAMWITHLOADER
