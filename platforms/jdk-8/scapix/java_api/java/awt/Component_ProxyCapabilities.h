// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/sun/java2d/pipe/hw/ExtendedBufferCapabilities.h>

#ifndef SCAPIX_JAVA_API_JAVA_AWT_COMPONENT_PROXYCAPABILITIES_FWD
#define SCAPIX_JAVA_API_JAVA_AWT_COMPONENT_PROXYCAPABILITIES_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::awt { class Component_ProxyCapabilities; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::awt::Component_ProxyCapabilities>
{
	static constexpr fixed_string class_name = "java/awt/Component$ProxyCapabilities";
	using base_classes = std::tuple<scapix::java_api::sun::java2d::pipe::hw::ExtendedBufferCapabilities>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_COMPONENT_PROXYCAPABILITIES_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_AWT_COMPONENT_PROXYCAPABILITIES)
#define SCAPIX_JAVA_API_JAVA_AWT_COMPONENT_PROXYCAPABILITIES

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::awt::Component_ProxyCapabilities : public jni::object_base<"java/awt/Component$ProxyCapabilities",
	sun::java2d::pipe::hw::ExtendedBufferCapabilities>
{
public:


protected:

	Component_ProxyCapabilities(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_COMPONENT_PROXYCAPABILITIES
