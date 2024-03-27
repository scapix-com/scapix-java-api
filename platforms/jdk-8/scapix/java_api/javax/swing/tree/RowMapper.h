// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_TREE_ROWMAPPER_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_TREE_ROWMAPPER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing::tree { class RowMapper; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::tree::RowMapper>
{
	static constexpr fixed_string class_name = "javax/swing/tree/RowMapper";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_TREE_ROWMAPPER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_TREE_ROWMAPPER)
#define SCAPIX_JAVA_API_JAVAX_SWING_TREE_ROWMAPPER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/javax/swing/tree/TreePath.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::swing::tree::RowMapper : public jni::object_base<"javax/swing/tree/RowMapper",
	java::lang::Object>
{
public:

	jni::ref<jni::array<jint>> getRowsForPaths(jni::ref<jni::array<javax::swing::tree::TreePath>> p1) { return call_method<"getRowsForPaths", jni::ref<jni::array<jint>>>(p1); }

protected:

	RowMapper(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_TREE_ROWMAPPER
