// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/awt/Component_BltBufferStrategy.h>
#include <scapix/java_api/sun/awt/SubRegionShowable.h>

#ifndef SCAPIX_JAVA_API_JAVA_AWT_COMPONENT_BLTSUBREGIONBUFFERSTRATEGY_FWD
#define SCAPIX_JAVA_API_JAVA_AWT_COMPONENT_BLTSUBREGIONBUFFERSTRATEGY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::awt { class Component_BltSubRegionBufferStrategy; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::awt::Component_BltSubRegionBufferStrategy>
{
	static constexpr fixed_string class_name = "java/awt/Component$BltSubRegionBufferStrategy";
	using base_classes = std::tuple<scapix::java_api::java::awt::Component_BltBufferStrategy, scapix::java_api::sun::awt::SubRegionShowable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_COMPONENT_BLTSUBREGIONBUFFERSTRATEGY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_AWT_COMPONENT_BLTSUBREGIONBUFFERSTRATEGY)
#define SCAPIX_JAVA_API_JAVA_AWT_COMPONENT_BLTSUBREGIONBUFFERSTRATEGY

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::awt::Component_BltSubRegionBufferStrategy : public jni::object_base<"java/awt/Component$BltSubRegionBufferStrategy",
	java::awt::Component_BltBufferStrategy,
	sun::awt::SubRegionShowable>
{
public:

	void show(jint p1, jint p2, jint p3, jint p4) { return call_method<"show", void>(p1, p2, p3, p4); }
	jboolean showIfNotLost(jint p1, jint p2, jint p3, jint p4) { return call_method<"showIfNotLost", jboolean>(p1, p2, p3, p4); }

protected:

	Component_BltSubRegionBufferStrategy(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_COMPONENT_BLTSUBREGIONBUFFERSTRATEGY
