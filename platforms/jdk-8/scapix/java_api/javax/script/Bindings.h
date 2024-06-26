// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/Map.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SCRIPT_BINDINGS_FWD
#define SCAPIX_JAVA_API_JAVAX_SCRIPT_BINDINGS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::script { class Bindings; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::script::Bindings>
{
	static constexpr fixed_string class_name = "javax/script/Bindings";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::util::Map>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SCRIPT_BINDINGS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SCRIPT_BINDINGS)
#define SCAPIX_JAVA_API_JAVAX_SCRIPT_BINDINGS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::script::Bindings : public jni::object_base<"javax/script/Bindings",
	java::lang::Object,
	java::util::Map>
{
public:

	jni::ref<java::lang::Object> put(jni::ref<java::lang::String> p1, jni::ref<java::lang::Object> p2) { return call_method<"put", jni::ref<java::lang::Object>>(p1, p2); }
	void putAll(jni::ref<java::util::Map> p1) { return call_method<"putAll", void>(p1); }
	jboolean containsKey(jni::ref<java::lang::Object> p1) { return call_method<"containsKey", jboolean>(p1); }
	jni::ref<java::lang::Object> get(jni::ref<java::lang::Object> p1) { return call_method<"get", jni::ref<java::lang::Object>>(p1); }
	jni::ref<java::lang::Object> remove(jni::ref<java::lang::Object> p1) { return call_method<"remove", jni::ref<java::lang::Object>>(p1); }

protected:

	Bindings(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SCRIPT_BINDINGS
