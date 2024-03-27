// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_UNDO_STATEEDITABLE_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_UNDO_STATEEDITABLE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing::undo { class StateEditable; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::undo::StateEditable>
{
	static constexpr fixed_string class_name = "javax/swing/undo/StateEditable";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_UNDO_STATEEDITABLE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_UNDO_STATEEDITABLE)
#define SCAPIX_JAVA_API_JAVAX_SWING_UNDO_STATEEDITABLE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Hashtable.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::swing::undo::StateEditable : public jni::object_base<"javax/swing/undo/StateEditable",
	java::lang::Object>
{
public:

	static jni::ref<java::lang::String> RCSID() { return get_static_field<"RCSID", jni::ref<java::lang::String>>(); }

	void storeState(jni::ref<java::util::Hashtable> p1) { return call_method<"storeState", void>(p1); }
	void restoreState(jni::ref<java::util::Hashtable> p1) { return call_method<"restoreState", void>(p1); }

protected:

	StateEditable(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_UNDO_STATEEDITABLE
