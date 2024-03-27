// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/management/loading/MLet.h>
#include <scapix/java_api/javax/management/loading/PrivateClassLoader.h>

#ifndef SCAPIX_JAVA_API_JAVAX_MANAGEMENT_LOADING_PRIVATEMLET_FWD
#define SCAPIX_JAVA_API_JAVAX_MANAGEMENT_LOADING_PRIVATEMLET_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::management::loading { class PrivateMLet; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::management::loading::PrivateMLet>
{
	static constexpr fixed_string class_name = "javax/management/loading/PrivateMLet";
	using base_classes = std::tuple<scapix::java_api::javax::management::loading::MLet, scapix::java_api::javax::management::loading::PrivateClassLoader>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_MANAGEMENT_LOADING_PRIVATEMLET_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_MANAGEMENT_LOADING_PRIVATEMLET)
#define SCAPIX_JAVA_API_JAVAX_MANAGEMENT_LOADING_PRIVATEMLET

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/ClassLoader.h>
#include <scapix/java_api/java/net/URL.h>
#include <scapix/java_api/java/net/URLStreamHandlerFactory.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::management::loading::PrivateMLet : public jni::object_base<"javax/management/loading/PrivateMLet",
	javax::management::loading::MLet,
	javax::management::loading::PrivateClassLoader>
{
public:

	static jni::ref<javax::management::loading::PrivateMLet> new_object(jni::ref<jni::array<java::net::URL>> p1, jboolean p2) { return base_::new_object(p1, p2); }
	static jni::ref<javax::management::loading::PrivateMLet> new_object(jni::ref<jni::array<java::net::URL>> p1, jni::ref<java::lang::ClassLoader> p2, jboolean p3) { return base_::new_object(p1, p2, p3); }
	static jni::ref<javax::management::loading::PrivateMLet> new_object(jni::ref<jni::array<java::net::URL>> p1, jni::ref<java::lang::ClassLoader> p2, jni::ref<java::net::URLStreamHandlerFactory> p3, jboolean p4) { return base_::new_object(p1, p2, p3, p4); }

protected:

	PrivateMLet(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_MANAGEMENT_LOADING_PRIVATEMLET