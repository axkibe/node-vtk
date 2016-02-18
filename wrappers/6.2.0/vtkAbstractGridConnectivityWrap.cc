/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkObjectWrap.h"
#include "vtkAbstractGridConnectivityWrap.h"
#include "vtkUnsignedCharArrayWrap.h"
#include "vtkPointDataWrap.h"
#include "vtkCellDataWrap.h"
#include "vtkPointsWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkAbstractGridConnectivityWrap::ptpl;

VtkAbstractGridConnectivityWrap::VtkAbstractGridConnectivityWrap()
{ }

VtkAbstractGridConnectivityWrap::VtkAbstractGridConnectivityWrap(vtkSmartPointer<vtkAbstractGridConnectivity> _native)
{ native = _native; }

VtkAbstractGridConnectivityWrap::~VtkAbstractGridConnectivityWrap()
{ }

void VtkAbstractGridConnectivityWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkAbstractGridConnectivity").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("AbstractGridConnectivity").ToLocalChecked(), ConstructorGetter);
}

void VtkAbstractGridConnectivityWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkAbstractGridConnectivityWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkObjectWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkObjectWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkAbstractGridConnectivityWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetGhostedCellGhostArray", GetGhostedCellGhostArray);
	Nan::SetPrototypeMethod(tpl, "getGhostedCellGhostArray", GetGhostedCellGhostArray);

	Nan::SetPrototypeMethod(tpl, "GetGhostedGridCellData", GetGhostedGridCellData);
	Nan::SetPrototypeMethod(tpl, "getGhostedGridCellData", GetGhostedGridCellData);

	Nan::SetPrototypeMethod(tpl, "GetGhostedGridPointData", GetGhostedGridPointData);
	Nan::SetPrototypeMethod(tpl, "getGhostedGridPointData", GetGhostedGridPointData);

	Nan::SetPrototypeMethod(tpl, "GetGhostedPointGhostArray", GetGhostedPointGhostArray);
	Nan::SetPrototypeMethod(tpl, "getGhostedPointGhostArray", GetGhostedPointGhostArray);

	Nan::SetPrototypeMethod(tpl, "GetGhostedPoints", GetGhostedPoints);
	Nan::SetPrototypeMethod(tpl, "getGhostedPoints", GetGhostedPoints);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfGhostLayers", GetNumberOfGhostLayers);
	Nan::SetPrototypeMethod(tpl, "getNumberOfGhostLayers", GetNumberOfGhostLayers);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfGrids", GetNumberOfGrids);
	Nan::SetPrototypeMethod(tpl, "getNumberOfGrids", GetNumberOfGrids);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetNumberOfGhostLayers", SetNumberOfGhostLayers);
	Nan::SetPrototypeMethod(tpl, "setNumberOfGhostLayers", SetNumberOfGhostLayers);

#ifdef VTK_NODE_PLUS_VTKABSTRACTGRIDCONNECTIVITYWRAP_INITPTPL
	VTK_NODE_PLUS_VTKABSTRACTGRIDCONNECTIVITYWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkAbstractGridConnectivityWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		Nan::ThrowError("Cannot create instance of abstract class.");
		return;
	}
	else
	{
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
		{
			Nan::ThrowError("Parameter Error");
			return;
		}
	}

	info.GetReturnValue().Set(info.This());
}

void VtkAbstractGridConnectivityWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractGridConnectivityWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractGridConnectivityWrap>(info.Holder());
	vtkAbstractGridConnectivity *native = (vtkAbstractGridConnectivity *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkAbstractGridConnectivityWrap::GetGhostedCellGhostArray(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractGridConnectivityWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractGridConnectivityWrap>(info.Holder());
	vtkAbstractGridConnectivity *native = (vtkAbstractGridConnectivity *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		vtkUnsignedCharArray * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetGhostedCellGhostArray(
			info[0]->Int32Value()
		);
		VtkUnsignedCharArrayWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkUnsignedCharArrayWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkUnsignedCharArrayWrap *w = new VtkUnsignedCharArrayWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAbstractGridConnectivityWrap::GetGhostedGridCellData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractGridConnectivityWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractGridConnectivityWrap>(info.Holder());
	vtkAbstractGridConnectivity *native = (vtkAbstractGridConnectivity *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		vtkCellData * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetGhostedGridCellData(
			info[0]->Int32Value()
		);
		VtkCellDataWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkCellDataWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkCellDataWrap *w = new VtkCellDataWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAbstractGridConnectivityWrap::GetGhostedGridPointData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractGridConnectivityWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractGridConnectivityWrap>(info.Holder());
	vtkAbstractGridConnectivity *native = (vtkAbstractGridConnectivity *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		vtkPointData * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetGhostedGridPointData(
			info[0]->Int32Value()
		);
		VtkPointDataWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkPointDataWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkPointDataWrap *w = new VtkPointDataWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAbstractGridConnectivityWrap::GetGhostedPointGhostArray(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractGridConnectivityWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractGridConnectivityWrap>(info.Holder());
	vtkAbstractGridConnectivity *native = (vtkAbstractGridConnectivity *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		vtkUnsignedCharArray * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetGhostedPointGhostArray(
			info[0]->Int32Value()
		);
		VtkUnsignedCharArrayWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkUnsignedCharArrayWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkUnsignedCharArrayWrap *w = new VtkUnsignedCharArrayWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAbstractGridConnectivityWrap::GetGhostedPoints(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractGridConnectivityWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractGridConnectivityWrap>(info.Holder());
	vtkAbstractGridConnectivity *native = (vtkAbstractGridConnectivity *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		vtkPoints * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetGhostedPoints(
			info[0]->Int32Value()
		);
		VtkPointsWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkPointsWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkPointsWrap *w = new VtkPointsWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAbstractGridConnectivityWrap::GetNumberOfGhostLayers(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractGridConnectivityWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractGridConnectivityWrap>(info.Holder());
	vtkAbstractGridConnectivity *native = (vtkAbstractGridConnectivity *)wrapper->native.GetPointer();
	unsigned int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfGhostLayers();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkAbstractGridConnectivityWrap::GetNumberOfGrids(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractGridConnectivityWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractGridConnectivityWrap>(info.Holder());
	vtkAbstractGridConnectivity *native = (vtkAbstractGridConnectivity *)wrapper->native.GetPointer();
	unsigned int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfGrids();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkAbstractGridConnectivityWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractGridConnectivityWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractGridConnectivityWrap>(info.Holder());
	vtkAbstractGridConnectivity *native = (vtkAbstractGridConnectivity *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->IsA(
			*a0
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAbstractGridConnectivityWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractGridConnectivityWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractGridConnectivityWrap>(info.Holder());
	vtkAbstractGridConnectivity *native = (vtkAbstractGridConnectivity *)wrapper->native.GetPointer();
	vtkAbstractGridConnectivity * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkAbstractGridConnectivityWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkAbstractGridConnectivityWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkAbstractGridConnectivityWrap *w = new VtkAbstractGridConnectivityWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkAbstractGridConnectivityWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractGridConnectivityWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractGridConnectivityWrap>(info.Holder());
	vtkAbstractGridConnectivity *native = (vtkAbstractGridConnectivity *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkAbstractGridConnectivity * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		VtkAbstractGridConnectivityWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkAbstractGridConnectivityWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkAbstractGridConnectivityWrap *w = new VtkAbstractGridConnectivityWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAbstractGridConnectivityWrap::SetNumberOfGhostLayers(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractGridConnectivityWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractGridConnectivityWrap>(info.Holder());
	vtkAbstractGridConnectivity *native = (vtkAbstractGridConnectivity *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsUint32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetNumberOfGhostLayers(
			info[0]->Uint32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

