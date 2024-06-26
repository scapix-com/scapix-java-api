// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/prefs/Preferences.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_PREFS_ABSTRACTPREFERENCES_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_PREFS_ABSTRACTPREFERENCES_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::prefs { class AbstractPreferences; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::prefs::AbstractPreferences>
{
	static constexpr fixed_string class_name = "java/util/prefs/AbstractPreferences";
	using base_classes = std::tuple<scapix::java_api::java::util::prefs::Preferences>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_PREFS_ABSTRACTPREFERENCES_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_PREFS_ABSTRACTPREFERENCES)
#define SCAPIX_JAVA_API_JAVA_UTIL_PREFS_ABSTRACTPREFERENCES

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/OutputStream.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/prefs/NodeChangeListener.h>
#include <scapix/java_api/java/util/prefs/PreferenceChangeListener.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::util::prefs::AbstractPreferences : public jni::object_base<"java/util/prefs/AbstractPreferences",
	java::util::prefs::Preferences>
{
public:

	jni::ref<java::lang::String> absolutePath() { return call_method<"absolutePath", jni::ref<java::lang::String>>(); }
	jni::ref<jni::array<java::lang::String>> childrenNames() { return call_method<"childrenNames", jni::ref<jni::array<java::lang::String>>>(); }
	void clear() { return call_method<"clear", void>(); }
	void exportNode(jni::ref<java::io::OutputStream> ostream) { return call_method<"exportNode", void>(ostream); }
	void exportSubtree(jni::ref<java::io::OutputStream> ostream) { return call_method<"exportSubtree", void>(ostream); }
	void flush() { return call_method<"flush", void>(); }
	jni::ref<java::lang::String> get(jni::ref<java::lang::String> key, jni::ref<java::lang::String> deflt) { return call_method<"get", jni::ref<java::lang::String>>(key, deflt); }
	jboolean getBoolean(jni::ref<java::lang::String> key, jboolean deflt) { return call_method<"getBoolean", jboolean>(key, deflt); }
	jni::ref<jni::array<jbyte>> getByteArray(jni::ref<java::lang::String> key, jni::ref<jni::array<jbyte>> deflt) { return call_method<"getByteArray", jni::ref<jni::array<jbyte>>>(key, deflt); }
	jdouble getDouble(jni::ref<java::lang::String> key, jdouble deflt) { return call_method<"getDouble", jdouble>(key, deflt); }
	jfloat getFloat(jni::ref<java::lang::String> key, jfloat deflt) { return call_method<"getFloat", jfloat>(key, deflt); }
	jint getInt(jni::ref<java::lang::String> key, jint deflt) { return call_method<"getInt", jint>(key, deflt); }
	jlong getLong(jni::ref<java::lang::String> key, jlong deflt) { return call_method<"getLong", jlong>(key, deflt); }
	jboolean isUserNode() { return call_method<"isUserNode", jboolean>(); }
	jni::ref<jni::array<java::lang::String>> keys() { return call_method<"keys", jni::ref<jni::array<java::lang::String>>>(); }
	jni::ref<java::lang::String> name() { return call_method<"name", jni::ref<java::lang::String>>(); }
	jni::ref<java::util::prefs::Preferences> node(jni::ref<java::lang::String> name) { return call_method<"node", jni::ref<java::util::prefs::Preferences>>(name); }
	jboolean nodeExists(jni::ref<java::lang::String> name) { return call_method<"nodeExists", jboolean>(name); }
	jni::ref<java::util::prefs::Preferences> parent() { return call_method<"parent", jni::ref<java::util::prefs::Preferences>>(); }
	void put(jni::ref<java::lang::String> key, jni::ref<java::lang::String> value) { return call_method<"put", void>(key, value); }
	void putBoolean(jni::ref<java::lang::String> key, jboolean value) { return call_method<"putBoolean", void>(key, value); }
	void putByteArray(jni::ref<java::lang::String> key, jni::ref<jni::array<jbyte>> value) { return call_method<"putByteArray", void>(key, value); }
	void putDouble(jni::ref<java::lang::String> key, jdouble value) { return call_method<"putDouble", void>(key, value); }
	void putFloat(jni::ref<java::lang::String> key, jfloat value) { return call_method<"putFloat", void>(key, value); }
	void putInt(jni::ref<java::lang::String> key, jint value) { return call_method<"putInt", void>(key, value); }
	void putLong(jni::ref<java::lang::String> key, jlong value) { return call_method<"putLong", void>(key, value); }
	void remove(jni::ref<java::lang::String> key) { return call_method<"remove", void>(key); }
	void removeNode() { return call_method<"removeNode", void>(); }
	void addNodeChangeListener(jni::ref<java::util::prefs::NodeChangeListener> ncl) { return call_method<"addNodeChangeListener", void>(ncl); }
	void addPreferenceChangeListener(jni::ref<java::util::prefs::PreferenceChangeListener> pcl) { return call_method<"addPreferenceChangeListener", void>(pcl); }
	void removeNodeChangeListener(jni::ref<java::util::prefs::NodeChangeListener> ncl) { return call_method<"removeNodeChangeListener", void>(ncl); }
	void removePreferenceChangeListener(jni::ref<java::util::prefs::PreferenceChangeListener> pcl) { return call_method<"removePreferenceChangeListener", void>(pcl); }
	void sync() { return call_method<"sync", void>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	AbstractPreferences(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_PREFS_ABSTRACTPREFERENCES
