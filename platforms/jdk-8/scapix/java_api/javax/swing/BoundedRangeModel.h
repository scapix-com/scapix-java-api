// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_BOUNDEDRANGEMODEL_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_BOUNDEDRANGEMODEL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing { class BoundedRangeModel; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::BoundedRangeModel>
{
	static constexpr fixed_string class_name = "javax/swing/BoundedRangeModel";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_BOUNDEDRANGEMODEL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_BOUNDEDRANGEMODEL)
#define SCAPIX_JAVA_API_JAVAX_SWING_BOUNDEDRANGEMODEL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/javax/swing/event/ChangeListener.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::swing::BoundedRangeModel : public jni::object_base<"javax/swing/BoundedRangeModel",
	java::lang::Object>
{
public:

	jint getMinimum() { return call_method<"getMinimum", jint>(); }
	void setMinimum(jint p1) { return call_method<"setMinimum", void>(p1); }
	jint getMaximum() { return call_method<"getMaximum", jint>(); }
	void setMaximum(jint p1) { return call_method<"setMaximum", void>(p1); }
	jint getValue() { return call_method<"getValue", jint>(); }
	void setValue(jint p1) { return call_method<"setValue", void>(p1); }
	void setValueIsAdjusting(jboolean p1) { return call_method<"setValueIsAdjusting", void>(p1); }
	jboolean getValueIsAdjusting() { return call_method<"getValueIsAdjusting", jboolean>(); }
	jint getExtent() { return call_method<"getExtent", jint>(); }
	void setExtent(jint p1) { return call_method<"setExtent", void>(p1); }
	void setRangeProperties(jint p1, jint p2, jint p3, jint p4, jboolean p5) { return call_method<"setRangeProperties", void>(p1, p2, p3, p4, p5); }
	void addChangeListener(jni::ref<javax::swing::event::ChangeListener> p1) { return call_method<"addChangeListener", void>(p1); }
	void removeChangeListener(jni::ref<javax::swing::event::ChangeListener> p1) { return call_method<"removeChangeListener", void>(p1); }

protected:

	BoundedRangeModel(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_BOUNDEDRANGEMODEL
