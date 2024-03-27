// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/javax/swing/BoundedRangeModel.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_DEFAULTBOUNDEDRANGEMODEL_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_DEFAULTBOUNDEDRANGEMODEL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing { class DefaultBoundedRangeModel; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::DefaultBoundedRangeModel>
{
	static constexpr fixed_string class_name = "javax/swing/DefaultBoundedRangeModel";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::javax::swing::BoundedRangeModel, scapix::java_api::java::io::Serializable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_DEFAULTBOUNDEDRANGEMODEL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_DEFAULTBOUNDEDRANGEMODEL)
#define SCAPIX_JAVA_API_JAVAX_SWING_DEFAULTBOUNDEDRANGEMODEL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Class.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/EventListener.h>
#include <scapix/java_api/javax/swing/event/ChangeListener.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::swing::DefaultBoundedRangeModel : public jni::object_base<"javax/swing/DefaultBoundedRangeModel",
	java::lang::Object,
	javax::swing::BoundedRangeModel,
	java::io::Serializable>
{
public:

	static jni::ref<javax::swing::DefaultBoundedRangeModel> new_object() { return base_::new_object(); }
	static jni::ref<javax::swing::DefaultBoundedRangeModel> new_object(jint p1, jint p2, jint p3, jint p4) { return base_::new_object(p1, p2, p3, p4); }
	jint getValue() { return call_method<"getValue", jint>(); }
	jint getExtent() { return call_method<"getExtent", jint>(); }
	jint getMinimum() { return call_method<"getMinimum", jint>(); }
	jint getMaximum() { return call_method<"getMaximum", jint>(); }
	void setValue(jint p1) { return call_method<"setValue", void>(p1); }
	void setExtent(jint p1) { return call_method<"setExtent", void>(p1); }
	void setMinimum(jint p1) { return call_method<"setMinimum", void>(p1); }
	void setMaximum(jint p1) { return call_method<"setMaximum", void>(p1); }
	void setValueIsAdjusting(jboolean p1) { return call_method<"setValueIsAdjusting", void>(p1); }
	jboolean getValueIsAdjusting() { return call_method<"getValueIsAdjusting", jboolean>(); }
	void setRangeProperties(jint p1, jint p2, jint p3, jint p4, jboolean p5) { return call_method<"setRangeProperties", void>(p1, p2, p3, p4, p5); }
	void addChangeListener(jni::ref<javax::swing::event::ChangeListener> p1) { return call_method<"addChangeListener", void>(p1); }
	void removeChangeListener(jni::ref<javax::swing::event::ChangeListener> p1) { return call_method<"removeChangeListener", void>(p1); }
	jni::ref<jni::array<javax::swing::event::ChangeListener>> getChangeListeners() { return call_method<"getChangeListeners", jni::ref<jni::array<javax::swing::event::ChangeListener>>>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jni::ref<jni::array<java::util::EventListener>> getListeners(jni::ref<java::lang::Class> p1) { return call_method<"getListeners", jni::ref<jni::array<java::util::EventListener>>>(p1); }

protected:

	DefaultBoundedRangeModel(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_DEFAULTBOUNDEDRANGEMODEL
