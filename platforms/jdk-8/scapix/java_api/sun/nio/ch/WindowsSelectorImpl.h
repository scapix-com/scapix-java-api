// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/sun/nio/ch/SelectorImpl.h>

#ifndef SCAPIX_JAVA_API_SUN_NIO_CH_WINDOWSSELECTORIMPL_FWD
#define SCAPIX_JAVA_API_SUN_NIO_CH_WINDOWSSELECTORIMPL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::nio::ch { class WindowsSelectorImpl; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::nio::ch::WindowsSelectorImpl>
{
	static constexpr fixed_string class_name = "sun/nio/ch/WindowsSelectorImpl";
	using base_classes = std::tuple<scapix::java_api::sun::nio::ch::SelectorImpl>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NIO_CH_WINDOWSSELECTORIMPL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_NIO_CH_WINDOWSSELECTORIMPL)
#define SCAPIX_JAVA_API_SUN_NIO_CH_WINDOWSSELECTORIMPL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/nio/channels/Selector.h>
#include <scapix/java_api/sun/nio/ch/SelectionKeyImpl.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::nio::ch::WindowsSelectorImpl : public jni::object_base<"sun/nio/ch/WindowsSelectorImpl",
	sun::nio::ch::SelectorImpl>
{
public:

	void putEventOps(jni::ref<sun::nio::ch::SelectionKeyImpl> p1, jint p2) { return call_method<"putEventOps", void>(p1, p2); }
	jni::ref<java::nio::channels::Selector> wakeup() { return call_method<"wakeup", jni::ref<java::nio::channels::Selector>>(); }

protected:

	WindowsSelectorImpl(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NIO_CH_WINDOWSSELECTORIMPL