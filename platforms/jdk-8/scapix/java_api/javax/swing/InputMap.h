// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_INPUTMAP_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_INPUTMAP_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing { class InputMap; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::InputMap>
{
	static constexpr fixed_string class_name = "javax/swing/InputMap";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::io::Serializable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_INPUTMAP_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_INPUTMAP)
#define SCAPIX_JAVA_API_JAVAX_SWING_INPUTMAP

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/javax/swing/KeyStroke.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::swing::InputMap : public jni::object_base<"javax/swing/InputMap",
	java::lang::Object,
	java::io::Serializable>
{
public:

	static jni::ref<javax::swing::InputMap> new_object() { return base_::new_object(); }
	void setParent(jni::ref<javax::swing::InputMap> p1) { return call_method<"setParent", void>(p1); }
	jni::ref<javax::swing::InputMap> getParent() { return call_method<"getParent", jni::ref<javax::swing::InputMap>>(); }
	void put(jni::ref<javax::swing::KeyStroke> p1, jni::ref<java::lang::Object> p2) { return call_method<"put", void>(p1, p2); }
	jni::ref<java::lang::Object> get(jni::ref<javax::swing::KeyStroke> p1) { return call_method<"get", jni::ref<java::lang::Object>>(p1); }
	void remove(jni::ref<javax::swing::KeyStroke> p1) { return call_method<"remove", void>(p1); }
	void clear() { return call_method<"clear", void>(); }
	jni::ref<jni::array<javax::swing::KeyStroke>> keys() { return call_method<"keys", jni::ref<jni::array<javax::swing::KeyStroke>>>(); }
	jint size() { return call_method<"size", jint>(); }
	jni::ref<jni::array<javax::swing::KeyStroke>> allKeys() { return call_method<"allKeys", jni::ref<jni::array<javax::swing::KeyStroke>>>(); }

protected:

	InputMap(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_INPUTMAP
