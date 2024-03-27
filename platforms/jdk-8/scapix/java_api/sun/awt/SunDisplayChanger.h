// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_AWT_SUNDISPLAYCHANGER_FWD
#define SCAPIX_JAVA_API_SUN_AWT_SUNDISPLAYCHANGER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::awt { class SunDisplayChanger; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::awt::SunDisplayChanger>
{
	static constexpr fixed_string class_name = "sun/awt/SunDisplayChanger";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_AWT_SUNDISPLAYCHANGER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_AWT_SUNDISPLAYCHANGER)
#define SCAPIX_JAVA_API_SUN_AWT_SUNDISPLAYCHANGER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/sun/awt/DisplayChangedListener.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::awt::SunDisplayChanger : public jni::object_base<"sun/awt/SunDisplayChanger",
	java::lang::Object>
{
public:

	static jni::ref<sun::awt::SunDisplayChanger> new_object() { return base_::new_object(); }
	void add(jni::ref<sun::awt::DisplayChangedListener> p1) { return call_method<"add", void>(p1); }
	void remove(jni::ref<sun::awt::DisplayChangedListener> p1) { return call_method<"remove", void>(p1); }
	void notifyListeners() { return call_method<"notifyListeners", void>(); }
	void notifyPaletteChanged() { return call_method<"notifyPaletteChanged", void>(); }

protected:

	SunDisplayChanger(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_AWT_SUNDISPLAYCHANGER
