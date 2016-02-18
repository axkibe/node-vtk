/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkPolyDataAlgorithmWrap.h"
#include "vtkSpherePuzzleWrap.h"
#include "vtkObjectWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkSpherePuzzleWrap::ptpl;

VtkSpherePuzzleWrap::VtkSpherePuzzleWrap()
{ }

VtkSpherePuzzleWrap::VtkSpherePuzzleWrap(vtkSmartPointer<vtkSpherePuzzle> _native)
{ native = _native; }

VtkSpherePuzzleWrap::~VtkSpherePuzzleWrap()
{ }

void VtkSpherePuzzleWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkSpherePuzzle").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("SpherePuzzle").ToLocalChecked(), ConstructorGetter);
}

void VtkSpherePuzzleWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkSpherePuzzleWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkPolyDataAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkPolyDataAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkSpherePuzzleWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "MoveHorizontal", MoveHorizontal);
	Nan::SetPrototypeMethod(tpl, "moveHorizontal", MoveHorizontal);

	Nan::SetPrototypeMethod(tpl, "MovePoint", MovePoint);
	Nan::SetPrototypeMethod(tpl, "movePoint", MovePoint);

	Nan::SetPrototypeMethod(tpl, "MoveVertical", MoveVertical);
	Nan::SetPrototypeMethod(tpl, "moveVertical", MoveVertical);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "Reset", Reset);
	Nan::SetPrototypeMethod(tpl, "reset", Reset);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetPoint", SetPoint);
	Nan::SetPrototypeMethod(tpl, "setPoint", SetPoint);

#ifdef VTK_NODE_PLUS_VTKSPHEREPUZZLEWRAP_INITPTPL
	VTK_NODE_PLUS_VTKSPHEREPUZZLEWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkSpherePuzzleWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkSpherePuzzle> native = vtkSmartPointer<vtkSpherePuzzle>::New();
		VtkSpherePuzzleWrap* obj = new VtkSpherePuzzleWrap(native);
		obj->Wrap(info.This());
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

void VtkSpherePuzzleWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSpherePuzzleWrap *wrapper = ObjectWrap::Unwrap<VtkSpherePuzzleWrap>(info.Holder());
	vtkSpherePuzzle *native = (vtkSpherePuzzle *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkSpherePuzzleWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSpherePuzzleWrap *wrapper = ObjectWrap::Unwrap<VtkSpherePuzzleWrap>(info.Holder());
	vtkSpherePuzzle *native = (vtkSpherePuzzle *)wrapper->native.GetPointer();
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

void VtkSpherePuzzleWrap::MoveHorizontal(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSpherePuzzleWrap *wrapper = ObjectWrap::Unwrap<VtkSpherePuzzleWrap>(info.Holder());
	vtkSpherePuzzle *native = (vtkSpherePuzzle *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			if(info.Length() > 2 && info[2]->IsInt32())
			{
								if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				native->MoveHorizontal(
					info[0]->Int32Value(),
					info[1]->Int32Value(),
					info[2]->Int32Value()
				);
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSpherePuzzleWrap::MovePoint(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSpherePuzzleWrap *wrapper = ObjectWrap::Unwrap<VtkSpherePuzzleWrap>(info.Holder());
	vtkSpherePuzzle *native = (vtkSpherePuzzle *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->MovePoint(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSpherePuzzleWrap::MoveVertical(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSpherePuzzleWrap *wrapper = ObjectWrap::Unwrap<VtkSpherePuzzleWrap>(info.Holder());
	vtkSpherePuzzle *native = (vtkSpherePuzzle *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			if(info.Length() > 2 && info[2]->IsInt32())
			{
								if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				native->MoveVertical(
					info[0]->Int32Value(),
					info[1]->Int32Value(),
					info[2]->Int32Value()
				);
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSpherePuzzleWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSpherePuzzleWrap *wrapper = ObjectWrap::Unwrap<VtkSpherePuzzleWrap>(info.Holder());
	vtkSpherePuzzle *native = (vtkSpherePuzzle *)wrapper->native.GetPointer();
	vtkSpherePuzzle * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkSpherePuzzleWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkSpherePuzzleWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkSpherePuzzleWrap *w = new VtkSpherePuzzleWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkSpherePuzzleWrap::Reset(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSpherePuzzleWrap *wrapper = ObjectWrap::Unwrap<VtkSpherePuzzleWrap>(info.Holder());
	vtkSpherePuzzle *native = (vtkSpherePuzzle *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Reset();
}

void VtkSpherePuzzleWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSpherePuzzleWrap *wrapper = ObjectWrap::Unwrap<VtkSpherePuzzleWrap>(info.Holder());
	vtkSpherePuzzle *native = (vtkSpherePuzzle *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkSpherePuzzle * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		VtkSpherePuzzleWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkSpherePuzzleWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkSpherePuzzleWrap *w = new VtkSpherePuzzleWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSpherePuzzleWrap::SetPoint(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSpherePuzzleWrap *wrapper = ObjectWrap::Unwrap<VtkSpherePuzzleWrap>(info.Holder());
	vtkSpherePuzzle *native = (vtkSpherePuzzle *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
			if(info.Length() > 2 && info[2]->IsNumber())
			{
				int r;
				if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				r = native->SetPoint(
					info[0]->NumberValue(),
					info[1]->NumberValue(),
					info[2]->NumberValue()
				);
				info.GetReturnValue().Set(Nan::New(r));
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

