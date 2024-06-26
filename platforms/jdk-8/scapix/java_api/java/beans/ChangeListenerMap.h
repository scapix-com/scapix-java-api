// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_BEANS_CHANGELISTENERMAP_FWD
#define SCAPIX_JAVA_API_JAVA_BEANS_CHANGELISTENERMAP_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::beans { class ChangeListenerMap; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::beans::ChangeListenerMap>
{
	static constexpr fixed_string class_name = "java/beans/ChangeListenerMap";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_BEANS_CHANGELISTENERMAP_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_BEANS_CHANGELISTENERMAP)
#define SCAPIX_JAVA_API_JAVA_BEANS_CHANGELISTENERMAP

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/EventListener.h>
#include <scapix/java_api/java/util/Set.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::beans::ChangeListenerMap : public jni::object_base<"java/beans/ChangeListenerMap",
	java::lang::Object>
{
public:

	void add(jni::ref<java::lang::String> p1, jni::ref<java::util::EventListener> p2) { return call_method<"add", void>(p1, p2); }
	void remove(jni::ref<java::lang::String> p1, jni::ref<java::util::EventListener> p2) { return call_method<"remove", void>(p1, p2); }
	jni::ref<jni::array<java::util::EventListener>> get(jni::ref<java::lang::String> p1) { return call_method<"get", jni::ref<jni::array<java::util::EventListener>>>(p1); }
	void set(jni::ref<java::lang::String> p1, jni::ref<jni::array<java::util::EventListener>> p2) { return call_method<"set", void>(p1, p2); }
	jni::ref<jni::array<java::util::EventListener>> getListeners() { return call_method<"getListeners", jni::ref<jni::array<java::util::EventListener>>>(); }
	jni::ref<jni::array<java::util::EventListener>> getListeners(jni::ref<java::lang::String> p1) { return call_method<"getListeners", jni::ref<jni::array<java::util::EventListener>>>(p1); }
	jboolean hasListeners(jni::ref<java::lang::String> p1) { return call_method<"hasListeners", jboolean>(p1); }
	jni::ref<java::util::Set> getEntries() { return call_method<"getEntries", jni::ref<java::util::Set>>(); }
	jni::ref<java::util::EventListener> extract(jni::ref<java::util::EventListener> p1) { return call_method<"extract", jni::ref<java::util::EventListener>>(p1); }

protected:

	ChangeListenerMap(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_BEANS_CHANGELISTENERMAP
