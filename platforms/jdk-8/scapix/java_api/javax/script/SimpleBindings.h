// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/javax/script/Bindings.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SCRIPT_SIMPLEBINDINGS_FWD
#define SCAPIX_JAVA_API_JAVAX_SCRIPT_SIMPLEBINDINGS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::script { class SimpleBindings; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::script::SimpleBindings>
{
	static constexpr fixed_string class_name = "javax/script/SimpleBindings";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::javax::script::Bindings>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SCRIPT_SIMPLEBINDINGS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SCRIPT_SIMPLEBINDINGS)
#define SCAPIX_JAVA_API_JAVAX_SCRIPT_SIMPLEBINDINGS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Collection.h>
#include <scapix/java_api/java/util/Map.h>
#include <scapix/java_api/java/util/Set.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::script::SimpleBindings : public jni::object_base<"javax/script/SimpleBindings",
	java::lang::Object,
	javax::script::Bindings>
{
public:

	static jni::ref<javax::script::SimpleBindings> new_object(jni::ref<java::util::Map> p1) { return base_::new_object(p1); }
	static jni::ref<javax::script::SimpleBindings> new_object() { return base_::new_object(); }
	jni::ref<java::lang::Object> put(jni::ref<java::lang::String> p1, jni::ref<java::lang::Object> p2) { return call_method<"put", jni::ref<java::lang::Object>>(p1, p2); }
	void putAll(jni::ref<java::util::Map> p1) { return call_method<"putAll", void>(p1); }
	void clear() { return call_method<"clear", void>(); }
	jboolean containsKey(jni::ref<java::lang::Object> p1) { return call_method<"containsKey", jboolean>(p1); }
	jboolean containsValue(jni::ref<java::lang::Object> p1) { return call_method<"containsValue", jboolean>(p1); }
	jni::ref<java::util::Set> entrySet() { return call_method<"entrySet", jni::ref<java::util::Set>>(); }
	jni::ref<java::lang::Object> get(jni::ref<java::lang::Object> p1) { return call_method<"get", jni::ref<java::lang::Object>>(p1); }
	jboolean isEmpty() { return call_method<"isEmpty", jboolean>(); }
	jni::ref<java::util::Set> keySet() { return call_method<"keySet", jni::ref<java::util::Set>>(); }
	jni::ref<java::lang::Object> remove(jni::ref<java::lang::Object> p1) { return call_method<"remove", jni::ref<java::lang::Object>>(p1); }
	jint size() { return call_method<"size", jint>(); }
	jni::ref<java::util::Collection> values() { return call_method<"values", jni::ref<java::util::Collection>>(); }

protected:

	SimpleBindings(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SCRIPT_SIMPLEBINDINGS