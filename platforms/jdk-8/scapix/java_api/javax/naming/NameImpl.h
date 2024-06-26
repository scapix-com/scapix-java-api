// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVAX_NAMING_NAMEIMPL_FWD
#define SCAPIX_JAVA_API_JAVAX_NAMING_NAMEIMPL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::naming { class NameImpl; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::naming::NameImpl>
{
	static constexpr fixed_string class_name = "javax/naming/NameImpl";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_NAMING_NAMEIMPL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_NAMING_NAMEIMPL)
#define SCAPIX_JAVA_API_JAVAX_NAMING_NAMEIMPL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Enumeration.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class javax::naming::NameImpl : public jni::object_base<"javax/naming/NameImpl",
	java::lang::Object>
{
public:

	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jboolean equals(jni::ref<java::lang::Object> p1) { return call_method<"equals", jboolean>(p1); }
	jint compareTo(jni::ref<javax::naming::NameImpl> p1) { return call_method<"compareTo", jint>(p1); }
	jint size() { return call_method<"size", jint>(); }
	jni::ref<java::util::Enumeration> getAll() { return call_method<"getAll", jni::ref<java::util::Enumeration>>(); }
	jni::ref<java::lang::String> get(jint p1) { return call_method<"get", jni::ref<java::lang::String>>(p1); }
	jni::ref<java::util::Enumeration> getPrefix(jint p1) { return call_method<"getPrefix", jni::ref<java::util::Enumeration>>(p1); }
	jni::ref<java::util::Enumeration> getSuffix(jint p1) { return call_method<"getSuffix", jni::ref<java::util::Enumeration>>(p1); }
	jboolean isEmpty() { return call_method<"isEmpty", jboolean>(); }
	jboolean startsWith(jint p1, jni::ref<java::util::Enumeration> p2) { return call_method<"startsWith", jboolean>(p1, p2); }
	jboolean endsWith(jint p1, jni::ref<java::util::Enumeration> p2) { return call_method<"endsWith", jboolean>(p1, p2); }
	jboolean addAll(jni::ref<java::util::Enumeration> p1) { return call_method<"addAll", jboolean>(p1); }
	jboolean addAll(jint p1, jni::ref<java::util::Enumeration> p2) { return call_method<"addAll", jboolean>(p1, p2); }
	void add(jni::ref<java::lang::String> p1) { return call_method<"add", void>(p1); }
	void add(jint p1, jni::ref<java::lang::String> p2) { return call_method<"add", void>(p1, p2); }
	jni::ref<java::lang::Object> remove(jint p1) { return call_method<"remove", jni::ref<java::lang::Object>>(p1); }
	jint hashCode() { return call_method<"hashCode", jint>(); }

protected:

	NameImpl(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_NAMING_NAMEIMPL
